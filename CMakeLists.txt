cmake_minimum_required(VERSION 3.14)
project(my_first_cpp_proj)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_first_cpp_proj
        main.cpp
        PMSys.cpp PMSys.hpp
        PMGate3.cpp PMGate3.hpp
        PMMotor.cpp PMMotor.hpp
        PMCoord.cpp PMCoord.hpp
        PMEncTable.cpp PMEncTable.hpp
        )