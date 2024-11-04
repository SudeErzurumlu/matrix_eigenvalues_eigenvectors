# example_usage.rb
# Example usage of the calculate_eigenvalues and calculate_eigenvector functions

require_relative 'eigen_calculation'

# Define a 2x2 matrix
matrix = Matrix[[4, 1], [2, 3]]

# Calculate eigenvalues
eigenvalues = calculate_eigenvalues(matrix)
puts "Eigenvalues:"
eigenvalues.each { |val| puts val }

# Calculate eigenvectors for each eigenvalue
puts "\nEigenvectors:"
eigenvalues.each do |eigenvalue|
  eigenvector = calculate_eigenvector(matrix, eigenvalue)
  puts "Eigenvector for eigenvalue #{eigenvalue}: #{eigenvector}"
end
