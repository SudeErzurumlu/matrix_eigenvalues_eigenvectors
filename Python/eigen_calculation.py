# eigen_calculation.py
# Calculates the eigenvalues and eigenvectors of a matrix

import numpy as np

def calculate_eigen(matrix):
    """
    This function calculates the eigenvalues and eigenvectors of a given square matrix.
    
    Parameters:
    matrix (list of lists): A square matrix for which eigenvalues and eigenvectors are calculated.
    
    Returns:
    tuple: A tuple containing the eigenvalues and eigenvectors as numpy arrays.
    """
    # Convert input matrix to numpy array
    matrix = np.array(matrix)
    
    # Check if matrix is square
    if matrix.shape[0] != matrix.shape[1]:
        raise ValueError("The matrix must be square to calculate eigenvalues and eigenvectors.")
    
    # Calculate eigenvalues and eigenvectors
    eigenvalues, eigenvectors = np.linalg.eig(matrix)
    return eigenvalues, eigenvectors
