//
// Created by dgram on 1/22/2024.
//

#include "Exponent.h"
#include "cmath"

Exponent::Exponent(EquationNode *left, EquationNode *right) {
    this->left = left;
    this->right = right;
}

Exponent::~Exponent() {
    delete left;
    delete right;
}

double Exponent::execute() {
    return pow(left->execute(), right->execute());
}
