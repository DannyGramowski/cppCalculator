//
// Created by dgram on 1/19/2024.
//

#include "Constant.h"

Constant::Constant(double value) {
    this->value = value;
}

double Constant::execute() {
    return value;
}
