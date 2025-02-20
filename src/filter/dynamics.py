import numpy as np
from icecream import ic
from scipy.integrate import solve_ivp
from scipy.linalg import expm

class DynamicsModel:
    def __init__(self, x0, F_func, u, G, Qs, mu_E):
        """
        Initialize the dynamics model.

        Parameters:
        - x0: Initial state vector.
        - F_func: Function that computes the dynamics matrix F(x).
        - u: Control input vector.
        - G: Input matrix for known inputs.
        - Qs: Process noise spectral density matrix.
        - mu_E: Gravitational parameter of Earth.
        """
        self.__x0 = x0
        self.__F_func = F_func
        self.__u = u
        self.__G = G
        self.__Qs = Qs
        self.__mu_E = mu_E

    def __Phi(self, tk, tkm1, xkm1, epsilon=1e-6):
        """
        Compute the state transition matrix Φ(tk, tkm1).
        """
        delta_t = tk - tkm1
        if abs(delta_t) < epsilon:
            return np.eye(6)

        # Compute F(x) 
        F_matrix = self.__F_func(xkm1, self.__mu_E)

        # Compute the state transition matrix once
        return expm(F_matrix * delta_t)

    def __integrate(self, tk, tkm1, integrand_fn):
        """
        Numerically integrate the given function over [tkm1, tk].
        """
        def wrapper(t, y):
            return integrand_fn(t).flatten()

        result = solve_ivp(wrapper, [tkm1, tk], np.zeros_like(integrand_fn(tkm1).flatten()), t_eval=[tk])
        return result.y[:, -1].reshape(integrand_fn(tkm1).shape)

    def __ukm1(self, tk, tkm1, Phi_tkm1):
        """
        Compute the discrete-time input term using:
        ukm1 = ∫ (Φ(tk, τ) G u dτ)
        """
        def integrand(t):
            return Phi_tkm1 @ self.__G @ self.__u

        return self.__integrate(tk, tkm1, integrand)

    def __Qkm1(self, tk, tkm1, Phi_tkm1):
        """
        Compute the discrete-time process noise covariance using:
        Qkm1 = ∫ (Φ(tk, τ) Qs Φ(tk, τ).T dτ)
        """
        def integrand(t):
            return Phi_tkm1 @ self.__Qs @ Phi_tkm1.T

        return self.__integrate(tk, tkm1, integrand)

    def __wkm1(self, tk, tkm1, Phi_tkm1):
        """
        Generate a random process noise sample wkm1 based on Qkm1.
        """
        Qkm1 = self.__Qkm1(tk, tkm1, Phi_tkm1)

        # Ensure Qkm1 is positive-definite
        Qkm1 += np.eye(Qkm1.shape[0]) * 1e-9

        return np.random.multivariate_normal(np.zeros(Qkm1.shape[0]), Qkm1).reshape(-1, 1)

    ### Public ###
    def get_x0(self):
        return self.__x0 

    def get_xk(self, tk, tkm1, xkm1=None, return_wkm1=False):
        """
        Generate the current state using:
        xk = Φ(tk, tkm1) xkm1 + ukm1 + wkm1
        """
        if xkm1 is None:
            xkm1 = self.__x0  # Use initial state if no previous state is provided

        # Compute Φ(tk, tkm1) **ONCE**
        Phi_tkm1 = ic(self.__Phi(tk, tkm1, xkm1))

        # Compute ukm1 and wkm1 using the same Phi
        ukm1 = ic(self.__ukm1(tk, tkm1, Phi_tkm1))
        wkm1 = ic(self.__wkm1(tk, tkm1, Phi_tkm1))

        # State propagation
        xk = ic(Phi_tkm1 @ xkm1 + ukm1 + wkm1)

        if return_wkm1:
            return xk, wkm1
        return xk
