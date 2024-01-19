//
// Created by dgram on 1/19/2024.
//

#include "EquationNode.h"
#include "../Equation.h"


double EquationNode::execute() {
    return 0;
}

void EquationNode::AddEquation(Equation equation) {
    this->equation = equation;
}
