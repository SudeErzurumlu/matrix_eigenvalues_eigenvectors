# eigen_calculation.rb
# Calculates the eigenvalues and eigenvectors of a 2x2 matrix

require 'matrix'
require 'cmath'

def calculate_eigenvalues(matrix)
  # Check if the matrix is 2x2
  if matrix.row_size != 2 || matrix.column_size != 2
    raise 'Only 2x2 matrices are supported for this calculation.'
  end
  
  # Extract elements from the matrix
  a = matrix[0, 0]
  b = matrix[0, 1]
  c = matrix[1, 0]
  d = matrix[1, 1]
  
  # Calculate the trace and determinant
  trace = a + d
  determinant = a * d - b * c
  
  # Calculate the eigenvalues using the characteristic polynomial
  term = CMath.sqrt(trace**2 - 4 * determinant)
  eigenvalue1 = (trace + term) / 2.0
  eigenvalue2 = (trace - term) / 2.0
  
  [eigenvalue1, eigenvalue2]
end

def calculate_eigenvector(matrix, eigenvalue)
  a = matrix[0, 0]
  b = matrix[0, 1]
  c = matrix[1, 0]
  d = matrix[1, 1]
  
  # Find an eigenvector for the given eigenvalue
  if b != 0
    [eigenvalue - d, b]
  elsif c != 0
    [c, eigenvalue - a]
  else
    raise 'Unable to find eigenvector.'
  end
end
