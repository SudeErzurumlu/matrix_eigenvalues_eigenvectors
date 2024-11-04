<?php
// example_usage.php
// Example usage of the calculateEigenvalues and calculateEigenvector functions

require_once 'eigen_calculation.php';

// Define a 2x2 matrix
$matrix = [
    [4, 1],
    [2, 3]
];

// Calculate eigenvalues
$eigenvalues = calculateEigenvalues($matrix);
echo "Eigenvalues:\n";
foreach ($eigenvalues as $val) {
    echo $val . "\n";
}

// Calculate eigenvectors for each eigenvalue
echo "\nEigenvectors:\n";
foreach ($eigenvalues as $eigenvalue) {
    $eigenvector = calculateEigenvector($matrix, $eigenvalue);
    echo "Eigenvector for eigenvalue $eigenvalue: [" . implode(", ", $eigenvector) . "]\n";
}
?>
