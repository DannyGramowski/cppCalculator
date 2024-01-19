#include <iostream>
#include "equationNodes/EquationNode.h"
#include "equationNodes/Add.h"
#include "equationNodes/Constant.h"

int main() {
    EquationNode* node = new Add(Constant(5), Constant(3));
    std::cout << node->execute() << std::endl;
    EquationNode co = Constant(4);
    std::cout << co.execute();
    delete node;
}
