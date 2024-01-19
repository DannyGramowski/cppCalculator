#include <iostream>
#include "equationNodes/EquationNode.h"
#include "equationNodes/Add.h"
#include "equationNodes/Constant.h"

int main() {
    EquationNode c1 = Constant(5);
    EquationNode node = Add(c1, Constant(3));
    return 0;
}
