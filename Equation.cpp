//
// Created by dgram on 1/19/2024.
//

#include "Equation.h"

Equation::Equation(std::string originalInput, EquationNode head) {
    this->originalEquation = originalInput;
    head.AddEquation(this);
    this->head = head;
}

double Equation::getVariable(char c) {
    return variables[c];
}

void Equation::addVariable(char c) {
    variables[c] = 0;
}

void Equation::setVariablesToValues(std::unordered_map<char, double> values) {
    std::vector<char> keys;
    for(auto pair : variables) {
        keys.push_back(pair.first);
    }

    for(char c : keys) {
        variables[c] = values[c];
    }
}

double Equation::calculate() {
    return head.execute();
}
