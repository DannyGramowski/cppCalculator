//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_CONSTANT_H
#define CPPCALCULATOR_CONSTANT_H


#include "EquationNode.h"

class Constant : public EquationNode {
public:
    Constant(double value);
    double execute() override;

private:
    double  value;
};


#endif //CPPCALCULATOR_CONSTANT_H
