//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_EQUATION_H
#define CPPCALCULATOR_EQUATION_H
#include <string>
#include <unordered_map>
#include <vector>
#include "equationNodes/EquationNode.h"

class VariableData {
public:
    void addVariable(char c);
    double getValue(char c);
    void setValues(std::unordered_map<char, double> values);
    void setValue(double value);
    int getLength();
private:
    std::unordered_map<char, double> variables;
};

class Equation {
public:
    Equation(std::string originalInput, EquationNode* head, VariableData* variables);
    ~Equation();
    double calculate();
    double calculate(double value);
    double calculate(std::unordered_map<char, double> values);
    void setVariables(std::unordered_map<char, double> values);

private:
    std::string originalEquation;
    EquationNode* head;
    VariableData* variables;
};




#endif //CPPCALCULATOR_EQUATION_H
