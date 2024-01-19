//
// Created by dgram on 1/19/2024.
//

#include "Add.h"

Add::Add(EquationNode left, EquationNode right) {
    this->left = left;
    this->right = right;
}

void Add::AddEquation(Equation equation) {
    this->equation = equation;
    left.AddEquation(equation);
    right.AddEquation(equation);
}

double Add::execute() {
    return left.execute() + right.execute();
}

