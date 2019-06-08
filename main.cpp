#include <iostream>
#include "pm_sys.hpp"
#include "pm_gate3.hpp"
#include "pm_motor.hpp"
#include "pm_coord.hpp"

int main() {
    PMSys Sys;
    PMGate3 Gate3[16];
    PMMotor Motor[42];
    PMCoord Coord[11];
    PMEncTable EncTable[42];

    Sys.ServoPeriod = 1.0;
    std::cout << "Sys.ServoPeriod: " << Sys.ServoPeriod << std::endl;
    return 0;
}
