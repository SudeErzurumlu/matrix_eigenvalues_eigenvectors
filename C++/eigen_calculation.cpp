// eigen_calculation.cpp
// Calculates eigenvalues and eigenvectors of a matrix using power iteration method

#include <iostream>
#include <vector>
#include <cmath>

// Function to multiply matrix and vector
std::vector<double> matrix_vector_mult(const std::vector<std::vector<double>>& matrix, const std::vector<double>& vec) {
    int n = matrix.size();
    std::vector<double> result(n, 0.0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i] += matrix[i][j] * vec[j];
        }
    }
    return result;
}

// Function to calculate norm of a vector
double vector_norm(const std::vector<double>& vec) {
    double sum = 0.0;
    for (double v : vec) sum += v * v;
    return std::sqrt(sum);
}

// Power Iteration Algorithm to find dominant eigenvalue and eigenvector
std::pair<double, std::vector<double>> power_iteration(const std::vector<std::vector<double>>& matrix, int max_iters = 1000, double tol = 1e-9) {
    int n = matrix.size();
    std::vector<double> eigenvector(n, 1.0);
    double eigenvalue = 0.0;

    for (int iter = 0; iter < max_iters; ++iter) {
        std::vector<double> new_vector = matrix_vector_mult(matrix, eigenvector);
        double norm = vector_norm(new_vector);

        // Normalize the vector
        for (int i = 0; i < n; ++i) new_vector[i] /= norm;

        // Calculate eigenvalue
        double new_eigenvalue = 0.0;
        for (int i = 0; i < n; ++i) new_eigenvalue += new_vector[i] * eigenvector[i];

        if (std::fabs(new_eigenvalue - eigenvalue) < tol) {
            return {new_eigenvalue, new_vector};
        }

        eigenvector = new_vector;
        eigenvalue = new_eigenvalue;
    }
    return {eigenvalue, eigenvector};
}
