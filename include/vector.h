// vector.h

#pragma once

typedef struct {
    int size;
    double* vector;
} Vector;

Vector new_vec(int size);
Vector new_random_vec(int size, int range);

void print_vec(Vector *vec);
