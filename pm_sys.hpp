#ifndef MY_FIRST_CPP_PROJ_PM_SYS_HPP
#define MY_FIRST_CPP_PROJ_PM_SYS_HPP

class PMSys {
public:
    PMSys();

    //-------------------------------------------
    // save system data
    //-------------------------------------------
    double ServoPeriod;
    unsigned int BusCtrl[64]{};
    double RtIntPeriod = 3;
    double MaxRtPlc = 0;
    double PhaseOverServoPeriod = 0.25;
    double MaxMotors = 42;
    double MaxCoords = 11;
    double PhaseCycleExt = 0;
    double WDTReset = 0;
    double CompMotor = 0;
    double PreCalc = 1;
    double FirstEnc = 0;
    double BgWDTReset = 0;
    double SendFileMode = 30;
    double CPUTimerIntr = 0x0;
    double MaxEcats = 1;
    double BgSleepTime = 4000;
    double ModbusServerEnable = 0;
    double NoShortCmds = 0;
    double SimConfigOk = 0;
    double pAbortAll = 0;
    double AbortAllBit = 0;
    double AbortAllLimit = 0;
    double MaxTimedUnderflow = 0;
    double ZeroVelSetPoint = 0;
    double BufIoEnable = 0;
    double MaxRtBufIn = 0;
    double MaxRtBufOut = 0;
    double SyncSave = 0;
    double IEC61131 = 0;
    double IECBgEventPeriod = 3;
    double IECRtiEventPeriod = 9;
    const double ServoCtrl = 0x00000000;
    unsigned int SineTable[2]{};
    unsigned int pushm{};
};

#endif //MY_FIRST_CPP_PROJ_PM_SYS_HPP
