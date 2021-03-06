// layer.h

#include "vector.h"

typedef struct {
    int size;
    Vector* input;
    Vector  output;
    Matrix  weights;
    Vector  biases;
} Layer;

Layer new_layer(Vector *input, int size);

void compute(Layer *ly);

