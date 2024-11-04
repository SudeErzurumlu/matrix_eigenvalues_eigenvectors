// example_usage.c
// Example usage of the calculate_eigenvalue_vector function

#include <stdio.h>
#include "eigen_calculation.c"

int main() {
    // Define a sample matrix
    double matrix[SIZE][SIZE] = {
        {4, 1},
        {2, 3}
    };

    double eigenvalue;
    double eigenvector[SIZE];

    // Calculate eigenvalue and eigenvector
    calculate_eigenvalue_vector(matrix, &eigenvalue, eigenvector);

    // Display the results
    printf("Dominant Eigenvalue: %f\n", eigenvalue);
    printf("Eigenvector:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%f\n", eigenvector[i]);
    }

    return 0;
}
