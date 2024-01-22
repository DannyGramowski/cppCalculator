//
// Created by dgram on 1/19/2024.
//

#include "Variable.h"

Variable::Variable(char c, VariableData *data) {
    this->variable = c;
    this->data = data;
    data->addVariable(c);
}

double Variable::execute() {
    return data->getValue(variable);
}
