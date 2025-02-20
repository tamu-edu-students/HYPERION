import numpy as np

class MeasurementModel:
    def __init__(self, Hk, b, Rk):
        """
        Initialize the measurement model.
        
        Parameters:
        - Hk: Measurement matrix at time tk.
        - b: Sensor bias.
        - Rk: Measurement noise covariance at time tk.
        """
        self.Hk = Hk
        self.b = b  
        self.Rk = Rk

    def __vk(self):
        """
        Generate a measurement noise sample vk.
        """
        if np.isscalar(self.Rk):
            # Scalar noise
            return np.random.normal(0, np.sqrt(self.Rk))
        else:
            # Vector noise
            mean = np.zeros(self.Rk.shape[0])
            return np.random.multivariate_normal(mean, self.Rk).reshape(-1, 1)

    def yk(self, xk):
        """
        Simulate the range measurement with bias and noise.
        
        yk = Hk * xk + b + vk
        """
        vk = self.__vk()

        yk = self.Hk @ xk + self.b + vk
        
        return yk