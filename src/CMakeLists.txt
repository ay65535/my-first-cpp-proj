add_library(mylib
        pm_chan.cpp
        pm_coord.cpp
        pm_enctable.cpp
        pm_gate3.cpp
        pm_motor.cpp
        pm_servo.cpp
        pm_sys.cpp
        )
target_include_directories(mylib
        PUBLIC ${PROJECT_SOURCE_DIR}/src
        )
