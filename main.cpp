#include <iostream>
#include "equationNodes/EquationNode.h"
#include "equationNodes/Add.h"
#include "equationNodes/Constant.h"

int main() {
    EquationNode* node = new Add(new Constant(5), new Constant(3));
    std::cout << node->execute() << std::endl;
    EquationNode* co = new Constant(4);
    std::cout << co->execute();
    delete node;
}
