//
// Created by dgram on 1/22/2024.
//

#ifndef CPPCALCULATOR_EXPONENT_H
#define CPPCALCULATOR_EXPONENT_H


#include "EquationNode.h"

class Exponent: public EquationNode{
public:
    Exponent(EquationNode* left, EquationNode* right);
    ~Exponent();
    double execute() override;

private:
    EquationNode* left;
    EquationNode* right;
};


#endif //CPPCALCULATOR_EXPONENT_H
