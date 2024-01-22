//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_VARIABLE_H
#define CPPCALCULATOR_VARIABLE_H


#include "EquationNode.h"
#include "../Equation.h"

class Variable : public EquationNode{
public:
    Variable(char c, VariableData* data);
    double execute() override;

private:
    char variable;
    VariableData* data;

};


#endif //CPPCALCULATOR_VARIABLE_H
