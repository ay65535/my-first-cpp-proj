cmake_minimum_required(VERSION 3.10)
project(my_first_cpp_proj)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_first_cpp_proj
        main.cpp
        pm_sys.cpp pm_sys.hpp
        pm_chan.cpp pm_chan.hpp
        pm_gate3.cpp pm_gate3.hpp
        pm_servo.cpp pm_servo.hpp
        pm_motor.cpp pm_motor.hpp
        pm_coord.cpp pm_coord.hpp
        pm_enctable.cpp pm_enctable.hpp
        )