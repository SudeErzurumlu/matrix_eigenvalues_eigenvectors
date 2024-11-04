<?php
// eigen_calculation.php
// Calculates the eigenvalues and eigenvectors of a 2x2 matrix

function calculateEigenvalues($matrix) {
    // Check if the matrix is 2x2
    if (count($matrix) != 2 || count($matrix[0]) != 2) {
        throw new Exception("Only 2x2 matrices are supported for this calculation.");
    }
    
    // Extract elements from the matrix
    $a = $matrix[0][0];
    $b = $matrix[0][1];
    $c = $matrix[1][0];
    $d = $matrix[1][1];
    
    // Calculate the trace and determinant
    $trace = $a + $d;
    $determinant = $a * $d - $b * $c;
    
    // Calculate the eigenvalues using the characteristic polynomial
    $term = sqrt($trace**2 - 4 * $determinant);
    $eigenvalue1 = ($trace + $term) / 2.0;
    $eigenvalue2 = ($trace - $term) / 2.0;
    
    return [$eigenvalue1, $eigenvalue2];
}

function calculateEigenvector($matrix, $eigenvalue) {
    $a = $matrix[0][0];
    $b = $matrix[0][1];
    $c = $matrix[1][0];
    $d = $matrix[1][1];
    
    // Find an eigenvector for the given eigenvalue
    if ($b != 0) {
        return [$eigenvalue - $d, $b];
    } elseif ($c != 0) {
        return [$c, $eigenvalue - $a];
    } else {
        throw new Exception("Unable to find eigenvector.");
    }
}
?>
