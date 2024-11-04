% example_usage.m
% Example usage of the calculate_eigenvalues_vectors function

% Define a sample matrix
matrix = [4, 1; 2, 3];

% Calculate eigenvalues and eigenvectors
[eigenvalues, eigenvectors] = calculate_eigenvalues_vectors(matrix);

% Display the results
disp('Eigenvalues:');
disp(eigenvalues);

disp('Eigenvectors:');
disp(eigenvectors);
