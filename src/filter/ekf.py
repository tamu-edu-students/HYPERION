from dataclasses import dataclass
import numpy as np

@dataclass
class EKFStore:
    """
    Storage for an Extended Kalman Filter (EKF) including state estimates, covariances,
    errors, and measurement residuals over multiple time steps.
    """
    t: np.ndarray  # Measurement times

    mx_prior: np.ndarray  # Prior state estimates (n × N)
    mx_post: np.ndarray  # Posterior state estimates (n × N)
    Pxx_prior: np.ndarray  # Prior covariance (n × n × N)
    Pxx_post: np.ndarray  # Posterior covariance (n × n × N)

    ex_prior: np.ndarray  # Prior state errors (n × N)
    ex_post: np.ndarray  # Posterior state errors (n × N)
    sx_prior: np.ndarray  # Prior state error standard deviations (n × N)
    sx_post: np.ndarray  # Posterior state error standard deviations (n × N)

    mx: np.ndarray  # Interleaved state estimates (n × 2N)
    Pxx: np.ndarray  # Interleaved covariance (n × n × 2N)
    ex: np.ndarray  # Interleaved state errors (n × 2N)
    sx: np.ndarray  # Interleaved standard deviations (n × 2N)

    ez: np.ndarray  # Measurement residuals (p × N)
    sz: np.ndarray  # Measurement innovation standard deviations (p × N)
    z: np.ndarray  # Measurements (p × N)

    @staticmethod
    def initialize(n: int, p: int, N: int) -> "EKFStore":
        """
        Creates an EKFStore object with pre-allocated NaN arrays.

        Parameters
        ----------
        - n: State dimension
        - p: Measurement dimension
        - N: Number of measurements

        Returns
        -------
        - EKFStore object with initialized storage.
        """
        return EKFStore(
            t=np.full(N, np.nan),  # Measurement times
            mx_prior=np.full((n, N), np.nan),  
            mx_post=np.full((n, N), np.nan),  
            Pxx_prior=np.full((n, n, N), np.nan),  
            Pxx_post=np.full((n, n, N), np.nan),  
            ex_prior=np.full((n, N), np.nan),  
            ex_post=np.full((n, N), np.nan),  
            sx_prior=np.full((n, N), np.nan),  
            sx_post=np.full((n, N), np.nan),  
            mx=np.full((n, 2 * N), np.nan),  
            Pxx=np.full((n, n, 2 * N), np.nan),  
            ex=np.full((n, 2 * N), np.nan),  
            sx=np.full((n, 2 * N), np.nan),  
            ez=np.full((p, N), np.nan),  
            sz=np.full((p, N), np.nan),  
            z=np.full((p, N), np.nan),  
        )
