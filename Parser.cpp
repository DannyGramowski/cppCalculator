
//
// Created by dgram on 1/19/2024.
//
#include "Parser.h"
#include "equationNodes/Add.h"
#include "equationNodes/Subtract.h"
#include "equationNodes/Multiply.h"
#include "equationNodes/Divide.h"
#include "equationNodes/Exponent.h"
#include "equationNodes/Variable.h"
#include "equationNodes/Constant.h"

using namespace std;

Equation *Parser::parseEquation(const std::string &input) {
    variables = new VariableData();
    return new Equation(input, parse(const_cast<string &>(input)), variables);
}

bool Parser::validEquation(const string &input) {
    return false;
}

EquationNode* Parser::parse(string input) {
    int parenCount = 0;
    EquationNode* node = nullptr;
    if(input.at(0) == '(' && input.at(input.length() - 1) == ')'){//remove parenthesis
        input = input.substr(1, input.length() - 2);
    }
    node = parseAddSub(input);
    if(node == nullptr) {
        node = parseMultDivide(input);
    }
    if(node == nullptr) {
        node = parseExponent(input);
    }

    if(node == nullptr) {
        node = parseNumber(input, variables);
    }


    return node;
}

EquationNode* Parser::parseAddSub(string input) {
    int parenCount = 0;
    for(int i = input.length() - 1; i >=0; i--) {
        char ele = input.at(i);
        if(ele == ')') parenCount++;
        else if(ele == '(') parenCount--;
        else if (parenCount == 0 && ele == '+') return new Add(parse(input.substr(0,i)),
                                            parse(input.substr(i+1, input.length())));
        else if (parenCount == 0 && ele == '-' && i != 0 && input.at(i-1) != '+') { //i != 0 to stop infinite recursion for - numbers. if i == 0 then the number should be negative and the - is not subraction
            EquationNode* left = parse(input.substr(0, i));
            EquationNode* right = parse(input.substr(i+1, input.length()));
            return new Subtract(left, right);
            }
    }

    return nullptr;
}
EquationNode* Parser::parseMultDivide(string input) {
    int parenCount = 0;
    for(int i = input.length() - 1; i >=0; i--) {
        char ele = input.at(i);
        if(ele == ')') parenCount++;
        else if(ele == '(') parenCount--;
        else if (parenCount == 0 && ele == '*') return new Multiply(parse(input.substr(0,i)),
                                                               parse(input.substr(i+1, input.length())));
        else if (parenCount == 0 && ele == '/') return new Divide(parse(input.substr(0, i)),
                                                                    parse(input.substr(i+1, input.length())));
    }

    return nullptr;
}

EquationNode* Parser::parseExponent(string input) {
    for(int i = input.length() - 1; i >=0; i--) {
        char ele = input.at(i);
        if (ele == '^') return new Exponent(parse(input.substr(0,i)),
                                                                    parse(input.substr(i+1, input.length())));
    }
    return nullptr;
}

EquationNode *Parser::parseNumber(std::string input, VariableData *variables) {
    if(isalpha(input.at(0))){
        return new Variable(input.at((0)), variables);
    }

    return new Constant(stod(input));
}


// ((c5 mult vx) mult 3) add (c3 div (c2 div c3))


//(5x*3)+3/(2/3)
//15*x + 3 / 0.66
//15 * x + 0.5

//easy implementation
//right to left add/subtract(if not inside parenthesis)
//right to left multiply/divide(if not inside parenthesis)
//right to left exponent(if not inside parenthesis)
//right to left parenthesis(if not inside parenthesis)

//pemdas