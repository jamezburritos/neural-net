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
