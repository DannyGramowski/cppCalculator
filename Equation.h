//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_EQUATION_H
#define CPPCALCULATOR_EQUATION_H
#include <string>
#include <unordered_map>
#include <vector>
#include "Parser.h"
#include "equationNodes/EquationNode.h"

class Equation {
public:
    Equation(std::string originalInput, EquationNode head);
    double getVariable(char c);
    void addVariable(char c);
    void setVariablesToValues(std::unordered_map<char, double> values);

    double calculate();

private:
    std::string originalEquation;
    std::unordered_map<char, double> variables;
    EquationNode head;

};


#endif //CPPCALCULATOR_EQUATION_H
