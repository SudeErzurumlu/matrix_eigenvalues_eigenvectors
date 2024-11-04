# example_usage.R
# Example usage of the calculate_eigen function

# Define a sample matrix
matrix <- matrix(c(4, 1, 2, 3), nrow = 2, byrow = TRUE)

# Calculate eigenvalues and eigenvectors
eigen_results <- calculate_eigen(matrix)

# Display the results
cat("Eigenvalues:\n")
print(eigen_results$eigenvalues)
cat("\nEigenvectors:\n")
print(eigen_results$eigenvectors)
