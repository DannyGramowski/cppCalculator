//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_EQUATION_H
#define CPPCALCULATOR_EQUATION_H
#include <string>
#include <unordered_map>
#include <vector>
#include "equationNodes/EquationNode.h"

struct VariableData {
    std::unordered_map<char, double> variables;
};

class Equation {
public:
    Equation(std::string originalInput, EquationNode head);
    ~Equation();
    double getVariable(char c);
    void addVariable(char c);
    void setVariablesToValues(std::unordered_map<char, double> values);

    double calculate();

private:
    std::string originalEquation;
    EquationNode head;
    VariableData* variables;
};




#endif //CPPCALCULATOR_EQUATION_H
