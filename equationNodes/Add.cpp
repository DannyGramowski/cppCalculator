//
// Created by dgram on 1/19/2024.
//

#include "Add.h"

Add::Add(EquationNode* left, EquationNode* right) {
    this->left = left;
    this->right = right;
}

double Add::execute() {
    return left->execute() + right->execute();
}

Add::~Add() {
    delete left;
    delete right;
}

