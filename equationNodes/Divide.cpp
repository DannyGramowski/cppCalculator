//
// Created by dgram on 1/19/2024.
//

#include "Divide.h"

Divide::Divide(EquationNode *left, EquationNode *right) {
    this->left = left;
    this->right = right;
}

Divide::~Divide() {
    delete left;
    delete right;
}

double Divide::execute() {
    return left->execute() / right->execute();
}
