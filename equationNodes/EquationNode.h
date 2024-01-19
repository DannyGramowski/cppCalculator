//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_EQUATIONNODE_H
#define CPPCALCULATOR_EQUATIONNODE_H


#include "../Equation.h"

class EquationNode {
public:
    virtual double execute();

    virtual void AddEquation(Equation equation);
protected:
    Equation equation;
};




#endif //CPPCALCULATOR_EQUATIONNODE_H
