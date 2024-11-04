% calculate_eigenvalues_vectors.m
% Function to calculate the eigenvalues and eigenvectors of a matrix

function [eigenvalues, eigenvectors] = calculate_eigenvalues_vectors(matrix)
    % Check if the input is a square matrix
    [rows, cols] = size(matrix);
    if rows ~= cols
        error('Matrix must be square to calculate eigenvalues and eigenvectors.');
    end
    
    % Calculate eigenvalues and eigenvectors
    [eigenvectors, D] = eig(matrix);
    eigenvalues = diag(D); % Extract eigenvalues from the diagonal matrix D
end
