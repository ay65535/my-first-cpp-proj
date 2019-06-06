#include <iostream>
#include "PMSys.hpp"

int main() {
    PMSys Sys;

    Sys.ServoPeriod = 1.0;
    std::cout << "Sys.ServoPeriod: " << Sys.ServoPeriod << std::endl;
    return 0;
}
