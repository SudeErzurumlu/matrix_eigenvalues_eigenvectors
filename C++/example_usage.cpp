// example_usage.cpp
#include <iostream>
#include "eigen_calculation.cpp"

int main() {
    // Example matrix
    std::vector<std::vector<double>> matrix = {
        {4, 1},
        {2, 3}
    };

    auto [eigenvalue, eigenvector] = power_iteration(matrix);

    std::cout << "Dominant Eigenvalue: " << eigenvalue << "\nEigenvector: ";
    for (double val : eigenvector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
