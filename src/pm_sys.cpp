#include "pm_sys.hpp"

PMSys::PMSys() {
    //-------------------------------------------
    // save system data
    //-------------------------------------------
    ServoPeriod = 1;
    BusCtrl[0] = 0x6b68u;
    BusCtrl[1] = 0x6b68u;
    BusCtrl[2] = 0x6b68u;
    BusCtrl[3] = 0x6b68u;
    BusCtrl[4] = 0x6b68u;
    BusCtrl[5] = 0x6b68u;
    BusCtrl[6] = 0x6b68u;
    BusCtrl[7] = 0x6b68u;
    BusCtrl[8] = 0x6b68u;
    BusCtrl[9] = 0x6b68u;
    BusCtrl[10] = 0x6b68u;
    BusCtrl[11] = 0x6b68u;
    BusCtrl[12] = 0x6b68u;
    BusCtrl[13] = 0x6b68u;
    BusCtrl[14] = 0x6b68u;
    BusCtrl[15] = 0x6b68u;
    BusCtrl[16] = 0x6b68u;
    BusCtrl[17] = 0x6b68u;
    BusCtrl[18] = 0x6b68u;
    BusCtrl[19] = 0x6b68u;
    BusCtrl[20] = 0x6b68u;
    BusCtrl[21] = 0x6b68u;
    BusCtrl[22] = 0x6b68u;
    BusCtrl[23] = 0x6b68u;
    BusCtrl[24] = 0x6b68u;
    BusCtrl[25] = 0x6b68u;
    BusCtrl[26] = 0x6b68u;
    BusCtrl[27] = 0x6b68u;
    BusCtrl[28] = 0x6b68u;
    BusCtrl[29] = 0x6b68u;
    BusCtrl[30] = 0x6b68u;
    BusCtrl[31] = 0x6b68u;
    BusCtrl[32] = 0x6b68u;
    BusCtrl[33] = 0x6b68u;
    BusCtrl[34] = 0x6b68u;
    BusCtrl[35] = 0x6b68u;
    BusCtrl[36] = 0x6b68u;
    BusCtrl[37] = 0x6b68u;
    BusCtrl[38] = 0x6b68u;
    BusCtrl[39] = 0x6b68u;
    BusCtrl[40] = 0x6b68u;
    BusCtrl[41] = 0x6b68u;
    BusCtrl[42] = 0x6b68u;
    BusCtrl[43] = 0x6b68u;
    BusCtrl[44] = 0x6b68u;
    BusCtrl[45] = 0x6b68u;
    BusCtrl[46] = 0x6b68u;
    BusCtrl[47] = 0x6b68u;
    BusCtrl[48] = 0x6b68u;
    BusCtrl[49] = 0x6b68u;
    BusCtrl[50] = 0x6b68u;
    BusCtrl[51] = 0x6b68u;
    BusCtrl[52] = 0x6b68u;
    BusCtrl[53] = 0x6b68u;
    BusCtrl[54] = 0x6b68u;
    BusCtrl[55] = 0x6b68u;
    BusCtrl[56] = 0x6b68u;
    BusCtrl[57] = 0x6b68u;
    BusCtrl[58] = 0x6b68u;
    BusCtrl[59] = 0x6b68u;
    BusCtrl[60] = 0x6b68u;
    BusCtrl[61] = 0x6b68u;
    BusCtrl[62] = 0x6b68u;
    BusCtrl[63] = 0x6b68u;
    RtIntPeriod = 3;
    MaxRtPlc = 0;
    PhaseOverServoPeriod = 0.25;
    MaxMotors = 42;
    MaxCoords = 11;
    PhaseCycleExt = 0;
    WDTReset = 0;
    CompMotor = 0;
    PreCalc = 1;
    FirstEnc = 0;
    BgWDTReset = 0;
    SendFileMode = 30;
    CPUTimerIntr = 0x0;
    MaxEcats = 1;
    BgSleepTime = 4000;
    ModbusServerEnable = 0;
    NoShortCmds = 0;
    SimConfigOk = 0;
    pAbortAll = 0;
    AbortAllBit = 0;
    AbortAllLimit = 0;
    MaxTimedUnderflow = 0;
    ZeroVelSetPoint = 0;
    BufIoEnable = 0;
    MaxRtBufIn = 0;
    MaxRtBufOut = 0;
    SyncSave = 0;
    IEC61131 = 0;
    IECBgEventPeriod = 3;
    IECRtiEventPeriod = 9;
    pushm = 0x0;
};