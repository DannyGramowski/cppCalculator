//
// Created by dgram on 1/19/2024.
//

#ifndef CPPCALCULATOR_PARSER_H
#define CPPCALCULATOR_PARSER_H
#include <string>
#include "Equation.h"

class Parser {
    public:
        bool validEquation(const std::string& input);
        Equation* parseEquation(const std::string& input);
private:
    VariableData* variables;
    EquationNode* parse(std::string input);
    EquationNode* parseAddSub(std::string input);
    EquationNode* parseMultDivide(std::string input);
    EquationNode* parseExponent(std::string input);
    EquationNode* parseNumber(std::string input, VariableData* variables);
};


#endif //CPPCALCULATOR_PARSER_H
