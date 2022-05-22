#pragma once

//
// Matrix 
//

typedef struct {
    int rows;
    int cols;
    double** matrix;
} Matrix;

Matrix new_mat(int rows, int cols);
Matrix new_random_mat(int rows, int cols, int range);

void print_mat(Matrix *mat);
