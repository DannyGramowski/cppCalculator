//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_DIVIDE_H
#define CPPCALCULATOR_DIVIDE_H


#include "EquationNode.h"

class Divide: public EquationNode{
public:
    Divide(EquationNode* left, EquationNode* right);
    ~Divide();
    double execute() override;
private:
    EquationNode* left;
    EquationNode* right;
};


#endif //CPPCALCULATOR_DIVIDE_H
