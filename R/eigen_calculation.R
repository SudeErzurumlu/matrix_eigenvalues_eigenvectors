# eigen_calculation.R
# Calculates eigenvalues and eigenvectors of a matrix

# Function to compute eigenvalues and eigenvectors
calculate_eigen <- function(matrix) {
  # Check if the matrix is square
  if (nrow(matrix) != ncol(matrix)) {
    stop("Matrix must be square to calculate eigenvalues and eigenvectors.")
  }
  
  # Calculate eigenvalues and eigenvectors
  eigen_results <- eigen(matrix)
  
  # Extract eigenvalues and eigenvectors
  eigenvalues <- eigen_results$values
  eigenvectors <- eigen_results$vectors
  
  return(list("eigenvalues" = eigenvalues, "eigenvectors" = eigenvectors))
}
