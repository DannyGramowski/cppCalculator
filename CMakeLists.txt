cmake_minimum_required(VERSION 3.27)
project(cppCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(cppCalculator main.cpp
        Calculator.cpp
        Calculator.h
        Parser.cpp
        Parser.h
        Equation.cpp
        Equation.h
        equationNodes/EquationNode.cpp
        equationNodes/EquationNode.h
        equationNodes/Constant.cpp
        equationNodes/Constant.h
        equationNodes/Add.cpp
        equationNodes/Add.h
        equationNodes/Variable.cpp
        equationNodes/Variable.h
        equationNodes/Subtract.cpp
        equationNodes/Subtract.h
        equationNodes/Multiply.cpp
        equationNodes/Multiply.h
        equationNodes/Divide.cpp
        equationNodes/Divide.h
        equationNodes/Exponent.cpp
        equationNodes/Exponent.h)
