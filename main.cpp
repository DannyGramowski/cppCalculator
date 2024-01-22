#include <iostream>
#include "equationNodes/EquationNode.h"
#include "equationNodes/Add.h"
#include "equationNodes/Constant.h"
#include "Equation.h"
#include "equationNodes/Variable.h"
#include "equationNodes/Subtract.h"
#include "equationNodes/Multiply.h"
#include "equationNodes/Divide.h"
#include "Parser.h"

using namespace std;


//bugs:
int main() {
    Parser parser;
    Equation* eq = parser.parseEquation("x^2-5");
    double output = eq->calculate(8);
    cout << output << endl;
}
