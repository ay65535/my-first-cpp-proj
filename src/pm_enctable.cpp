#include "pm_enctable.hpp"
#include "pm_sys.hpp"
#include "pm_gate3.hpp"

PMEncTable::PMEncTable() = default;

PMEncTable::PMEncTable(PMSys Sys, PMGate3 CK3WAX[]) : PMEncTable() {
    //-------------------------------------------
    // save encoder data
    //-------------------------------------------
    type = 1;
    index1 = 0;
    index2 = 0;
    index3 = 0;
    index4 = 0;
    index5 = 0;
    pEnc1 = Sys.pushm;
    pEnc = &CK3WAX[0].Chan[0].ServoCapt;
    MaxDelta = 0;
    ScaleFactor = 0.00390625;
    index6 = 0;
}
