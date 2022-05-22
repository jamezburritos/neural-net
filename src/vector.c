// vector.c

#include "vector.h"

#include <stdlib.h>
#include <stdio.h>

Vector new_vec(int size)
{
    return (Vector) { size, calloc(size, sizeof(double*)) };
}

Vector new_random_vec(int size, int range)
{
    Vector vec = new_vec(size);
    
    for (int i = 0; i < size; i++)
        vec.vector[i] = (double)
            ((rand() / (RAND_MAX * 1.0)) * (range * 2) - range);

    return vec;
}

void print_vec(Vector *vec)
{
    printf("Vector (%i): [ ", vec->size);

    for (int i = 0; i < vec->size; i++)
        printf("%.2f ", vec->vector[i]);

    printf("]\n");
}

void add_vec(Vector *a, Vector *b)
{
    for (int i = 0; i < a->size; i++)
        a->vector[i] += b->vector[i];
}

void copy_vec(Vector *src, Vector *dst)
{
    for (int i = 0; i < dst->size; i++)
        dst->vector[i] = src->vector[i];
}

void map_vec(Vector *vec, double (*fn)(double))
{
    for (int i = 0; i < vec->size; i++)
        vec->vector[i] = fn(vec->vector[i]);
}

void dot(Vector *a, Matrix *b)
{
    for (int i = 0; i < b->rows; i++)
    {
        double product = 0;
        for (int j = 0; j < a->size; j++)
            product += a->vector[i] * b->matrix[i][j];

        a->vector[i] = product;
    }
}

