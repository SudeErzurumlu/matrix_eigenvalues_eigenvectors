// eigen_calculation.c
// Calculates the dominant eigenvalue and eigenvector of a matrix using power iteration

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ITER 1000
#define TOL 1e-9
#define SIZE 2 // Define size of the square matrix

// Function to multiply a matrix by a vector
void matrix_vector_mult(double matrix[SIZE][SIZE], double vector[SIZE], double result[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        result[i] = 0.0;
        for (int j = 0; j < SIZE; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
}

// Function to calculate the norm of a vector
double vector_norm(double vector[SIZE]) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        sum += vector[i] * vector[i];
    }
    return sqrt(sum);
}

// Function to calculate the dominant eigenvalue and eigenvector using power iteration
void calculate_eigenvalue_vector(double matrix[SIZE][SIZE], double *eigenvalue, double eigenvector[SIZE]) {
    // Initialize eigenvector with arbitrary values
    for (int i = 0; i < SIZE; i++) {
        eigenvector[i] = 1.0;
    }

    double prev_eigenvalue = 0.0;
    for (int iter = 0; iter < MAX_ITER; iter++) {
        double new_vector[SIZE];
        matrix_vector_mult(matrix, eigenvector, new_vector);

        double norm = vector_norm(new_vector);
        
        // Normalize the vector
        for (int i = 0; i < SIZE; i++) {
            new_vector[i] /= norm;
        }

        *eigenvalue = 0.0;
        for (int i = 0; i < SIZE; i++) {
            *eigenvalue += new_vector[i] * eigenvector[i];
        }

        if (fabs(*eigenvalue - prev_eigenvalue) < TOL) {
            for (int i = 0; i < SIZE; i++) {
                eigenvector[i] = new_vector[i];
            }
            return;
        }

        prev_eigenvalue = *eigenvalue;

        for (int i = 0; i < SIZE; i++) {
            eigenvector[i] = new_vector[i];
        }
    }
    printf("Power iteration did not converge within the maximum number of iterations.\n");
}
