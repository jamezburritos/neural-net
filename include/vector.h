// vector.h

#pragma once

#include "matrix.h"

typedef struct {
    int size;
    double* vector;
} Vector;

Vector new_vec(int size);
Vector new_random_vec(int size, int range);

void print_vec(Vector *vec);
void add_vec(Vector *a, Vector *b);
void copy_vec(Vector *src, Vector *dst);
void map_vec(Vector *vec, double (*fn)(double));
void dot(Vector *a, Matrix *b);
