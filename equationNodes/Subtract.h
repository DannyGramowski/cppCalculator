//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_SUBTRACT_H
#define CPPCALCULATOR_SUBTRACT_H


#include "EquationNode.h"

class Subtract: public EquationNode{
public:
    Subtract(EquationNode* left, EquationNode* right);
    ~Subtract();
    double execute() override;
private:
    EquationNode* left;
    EquationNode* right;
};


#endif //CPPCALCULATOR_SUBTRACT_H
