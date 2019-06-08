#ifndef MY_FIRST_CPP_PROJ_PM_MOTOR_HPP
#define MY_FIRST_CPP_PROJ_PM_MOTOR_HPP


#include "pm_sys.hpp"
#include "pm_servo.hpp"
#include "pm_gate3.hpp"
#include "pm_enctable.hpp"

class PMMotor {
public:
    PMMotor();

    PMMotor(PMSys Sys, PMGate3 *CK3WAX, PMEncTable *EncTable);

    double Ctrl{};
    PMServo Servo{};
    double PhasePosSf = 0.00800000000000000017;
    double Pos2Sf = 1;
    double PosSf = 1;
    double MasterPosSf = 1;
    double ProgJogPos = 0;
    double IdCmd = 0;
    double IaBias = 0;
    double IbBias = 0;
    double SlipGain = 0;
    double IiGain = 0.0099999998;
    double IpfGain = 1;
    double IpbGain = 0;
    double IxCoupleGain = 0;
    double AdvGain = 0;
    double DtOverRotorTc = 0;
    double MotorTa = 0;
    double MotorTs = 0;
    double JogTa = 0;
    double JogTs = 0;
    double AbortTa = -2;
    double AbortTs = 0;
    double MaxSpeed = 131.07201;
    double JogSpeed = 0.80000001;
    double HomeVel = 10;
    double HomeOffset = 0;
    double InvAmax = 10;
    double InvJmax = 50;
    double FatalFeLimit = 16000;
    double WarnFeLimit = 8000;
    double MaxPos = 0;
    double MinPos = 0;
    double InPosBand = 80;
    double I2tSet = 0;
    double I2tTrip = 0;
    double JogOffset = 0;
    double AdcMask = 0xfff00000;
    double PhaseOffset = -683;
    double Stime = 0;
    double PwmSf = 18918;
    double MaxDac = 32767;
    double DacBias = 0;
    unsigned int *pSineTable{};
    unsigned int *pVoltSineTable{};
    int *pDac{};
    int *pAdc{};
    int *pPhaseEnc{};
    unsigned int *pEncStatus{};
    double *pEncCtrl{};
    PMEncTable *pEnc2{};
    double pEncLoss = 0;
    PMEncTable *pMasterEnc{};
    double EncType = 5;
    double AmpEnableBit = 8;
    double LimitBits = 9;
    double InvDmax = 10;
    double InPosTime = 0;
    double Pd1 = 0;
    double Pd2 = 0;
    double Pd3 = 0;
    double Pd4 = 0;
    double Pn0 = 0;
    double Pn1 = 0;
    double Pn2 = 0;
    double Pn3 = 0;
    double Pn4 = 0;
    double PreFilterEna = 0;
    double PhaseFindingDac = 0;
    double PhaseFindingTime = 0;
    double *pAmpEnable{};
    unsigned int *pAmpFault{};
    double pLimits = 0;
    double BlSlewRate = 0;
    double BlSize = 0;
    double BlHysteresis = 0;
    double AbsPhasePosOffset = 0;
    double AbsPhasePosFormat = 0x0;
    double AbsPhasePosSf = 0;
    double pAbsPhasePos = 0;
    double AbsPosFormat = 0x0;
    double AbsPosSf = 0;
    double pAbsPos = 0;
    double AbsPhasePosForce = 0;
    double AmpFaultBit = 7;
    double CmdMotor = 0;
    double GantrySlewRate = 0;
    double pBrakeOut = 0;
    double BrakeOnDelay = 0;
    double BrakeOffDelay = 0;
    double BrakeOutBit = 9;
    double CaptControl = 0x14080801;
    unsigned int *pCaptFlag{};
    int *pCaptPos{};
    double ExtraMotors = 0;
    double pBufPos2 = 0;
    double pBufPos = 0;
    PMEncTable *pEnc{};
    double EncLossBit = 0;
    double EncLossLimit = 0;
    double SlewMasterPosSf = 0;
    double MasterMaxSpeed = 0;
    double MasterMaxAccel = 0;
    double ServoCaptTimeOffset = 0;
    double SineTableSize = 2048;
    double PwmDbComp = 0;
    double PwmDbI = 0;
    double SoftLimitOffset = 0;
    double CurrentNullPeriod = 0;
    double pMotorNode{};
    double MotorNodeOffset = 0;
    double MotorModeCmdPosSf = 1;
    double pPhaseLoadEnc = 0;
    double pAuxFault = 0;
    double AuxFaultBit = 0;
    double AuxFaultLimit = 0;
    double TraceSize = 0;
    double EcatAmpFaultLimit = 0x3e8;
    double Vqff = 0;
    double pCascadeCmd = 0;
    double pCaptEna = 0;
    double Pos2Unit = 0;
    double PosUnit = 0;
    double CurrentScale = 0;
    double pDac2 = 0;
    double pAbsPos2 = 0;
    double MotorModeEncSf = 1;
    double MotorMode = 0;
    double LimitLimit = 0;
    double AmpFaultLimit = 0;
    double Control[2]{};
};


#endif //MY_FIRST_CPP_PROJ_PM_MOTOR_HPP
