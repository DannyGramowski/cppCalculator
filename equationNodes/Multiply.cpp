//
// Created by dgram on 1/19/2024.
//

#include "Multiply.h"

double Multiply::execute() {
    return left->execute() * right->execute();
}

Multiply::~Multiply() {
    delete left;
    delete right;
}

Multiply::Multiply(EquationNode *left, EquationNode *right) {
    this->left = left;
    this->right = right;
}
