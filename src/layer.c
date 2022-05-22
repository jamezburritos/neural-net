// layer.c

#include "layer.h"

#include <math.h>

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

double sigmoid(double x)
{
    return 1.0 / (1.0 + pow(M_E, -x));
}

void compute(Layer *ly)
{
    copy_vec(ly->input, &ly->output);
    dot(&ly->output, &ly->weights);
    add_vec(&ly->output, &ly->biases);
    map_vec(&ly->output, &sigmoid);
}
