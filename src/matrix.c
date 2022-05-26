// matrix.c

#include "matrix.h"

#include <stdlib.h>
#include <stdio.h>

Matrix new_mat(int rows, int cols)
{
    Matrix mat = { rows, cols, calloc(rows, sizeof(double**)) };
    
    for (int i = 0; i < rows; i++)
        mat.matrix[i] = calloc(rows, sizeof mat.matrix[i][0]);

    return mat;
}

Matrix new_random_mat(int rows, int cols)
{
    Matrix mat = new_mat(rows, cols);
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat.matrix[i][j] = (double)
                ((rand() / (RAND_MAX * 1.0)) * 2 - 1);

    return mat;
}

void print_mat(Matrix *mat)
{
    printf("Matrix (%ix%i):\n", mat->rows, mat->cols);

    for (int i = 0; i < mat->rows; i++)
    {
        printf("[ ");

        for (int j = 0; i < mat->cols; j++)
            printf("%.2f", mat->matrix[i][j]);

        printf("]\n");
    }
}
