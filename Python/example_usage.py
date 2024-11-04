# example_usage.py
# Example usage of the calculate_eigen function

from eigen_calculation import calculate_eigen

# Define a matrix (for example, a 3x3 matrix)
matrix = [
    [4, -2, 1],
    [1, 1, -1],
    [3, -1, 2]
]

# Calculate eigenvalues and eigenvectors
eigenvalues, eigenvectors = calculate_eigen(matrix)

# Print the results
print("Eigenvalues:")
print(eigenvalues)

print("\nEigenvectors:")
print(eigenvectors)
