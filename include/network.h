// network.h

#pragma once

#include "layer.h"

typedef struct {
    Layer input;
    Layer* layers;
    Layer output;
    int hidden;
    double cost;
} Network;
