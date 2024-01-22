//
// Created by dgram on 1/19/2024.
//

#include "Equation.h"
#include <stdexcept>


Equation::Equation(std::string originalInput, EquationNode* head, VariableData* variables) {
    this->originalEquation = originalInput;
    this->head = head;
    this->variables = variables;
}

double Equation::calculate() {
    return head->execute();
}

Equation::~Equation() {
    delete head;
    delete variables;
}

double Equation::calculate(double value) {
    variables->setValue(value);
    return calculate();
}

double Equation::calculate(std::unordered_map<char, double> values) {
    setVariables(values);
    return calculate();
}

void Equation::setVariables(std::unordered_map<char, double> values) {
    variables->setValues(values);

}

void VariableData::setValues(std::unordered_map<char, double> values) {
    std::vector<char> keys;
    for(auto pair : variables) {
        keys.push_back(pair.first);
    }

    for(char c : keys) {
        variables[c] = values[c];
    }
}

double VariableData::getValue(char c) {
    return variables[c];
}

void VariableData::addVariable(char c) {
    variables[c] = 0;
}

void VariableData::setValue(double value) {
    if(variables.size() != 1) throw std::exception();
    for(auto pair : variables) {
        variables[pair.first] = value;
    }
}

int VariableData::getLength() {
    return variables.size();
}
