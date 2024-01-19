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
};


#endif //CPPCALCULATOR_PARSER_H
