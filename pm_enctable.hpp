#ifndef MY_FIRST_CPP_PROJ_PM_ENCTABLE_HPP
#define MY_FIRST_CPP_PROJ_PM_ENCTABLE_HPP


#include "pm_sys.hpp"
#include "pm_gate3.hpp"

class PMEncTable {
public:
    PMEncTable();

    PMEncTable(PMSys Sys, PMGate3 *CK3WAX);

//-------------------------------------------
    // save encoder data
    //-------------------------------------------
    int type = 1;
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    int index4 = 0;
    int index5 = 0;
    int pEnc1{};
    unsigned int *pEnc{};
    int MaxDelta = 0;
    double ScaleFactor = 0.00390625;
    int index6 = 0;
};

#endif //MY_FIRST_CPP_PROJ_PM_ENCTABLE_HPP
