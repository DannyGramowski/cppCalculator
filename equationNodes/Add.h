//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_ADD_H
#define CPPCALCULATOR_ADD_H


#include "EquationNode.h"

class Add : public EquationNode {
public:
    Add(EquationNode left, EquationNode right);
    void AddEquation(Equation equation) override;
private:
    EquationNode left;
    EquationNode right;

    double execute() override;
};


#endif //CPPCALCULATOR_ADD_H
