// layer.c

#include "layer.h"

Layer new_layer(Vector *input, int size, int wRange, int bRange)
{
    return (Layer) {
        size, 
        input,
        new_vec(size),
        new_random_mat(size, input->size, wRange),
        new_random_vec(size, bRange)
    };
}


