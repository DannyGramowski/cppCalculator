//
// Created by dgram on 1/19/2024.
//

#include "Subtract.h"

double Subtract::execute() {
    return left->execute() - right->execute();
}

Subtract::~Subtract() {
    delete left;
    delete right;
}

Subtract::Subtract(EquationNode *left, EquationNode *right) {
    this->left = left;
    this->right = right;
}
