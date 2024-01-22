//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_MULTIPLY_H
#define CPPCALCULATOR_MULTIPLY_H


#include "EquationNode.h"

class Multiply: public EquationNode{
public:
    Multiply(EquationNode* left, EquationNode* right);
    ~Multiply();
    double execute() override;

private:
    EquationNode* left;
    EquationNode* right;
};


#endif //CPPCALCULATOR_MULTIPLY_H
