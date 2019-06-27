#include "pm_gate3.hpp"
#include <bitset>
#include <cmath>

PMGate3::PMGate3() {
    //-------------------------------------------
    // save gate array data
    //-------------------------------------------
    PhaseServoClockCtrl = 0x6bf60000;
    HardwareClockCtrl = 0x55550003;
    DacStrobe = 0xffff0000;
    AdcAmpCtrl = 0x0;
    AdcEncCtrl = 0xfffffc01;
    ResolverCtrl = 0x0;
    SerialEncCtrl = 0xf400000;
    GpioMode[0] = 0x0;
    GpioMode[1] = 0x0;
    GpioMode[2] = 0x0;
    GpioMode[3] = 0x0;
    GpioDir[0] = 0xffff0000;
    GpioDir[1] = 0x0;
    GpioDir[2] = 0x0;
    GpioDir[3] = 0x0;
    GpioPol[0] = 0x0;
    GpioPol[1] = 0x0;
    GpioPol[2] = 0x0;
    GpioPol[3] = 0x0;
    ReadAlias[0] = 0x0;
    ReadAlias[1] = 0x0;
    ReadAlias[2] = 0x0;
    ReadAlias[3] = 0x0;
    ReadAlias[4] = 0x0;
    ReadAlias[5] = 0x0;
    ReadAlias[6] = 0x0;
    ReadAlias[7] = 0x0;
    ReadAlias[8] = 0x0;
    ReadAlias[9] = 0x0;
    ReadAlias[10] = 0x0;
    ReadAlias[11] = 0x0;
    ReadAlias[12] = 0x0;
    ReadAlias[13] = 0x0;
    ReadAlias[14] = 0x0;
    WriteAlias[0] = 0x0;
    WriteAlias[1] = 0x0;
    WriteAlias[2] = 0x0;
    WriteAlias[3] = 0x0;
    WriteAlias[4] = 0x0;
    WriteAlias[5] = 0x0;
    WriteAlias[6] = 0x0;
    WriteAlias[7] = 0x0;
    WriteAlias[8] = 0x0;
    WriteAlias[9] = 0x0;
    WriteAlias[10] = 0x0;
    WriteAlias[11] = 0x0;
    WriteAlias[12] = 0x0;
    WriteAlias[13] = 0x0;
    WriteAlias[14] = 0x0;
    MacroEnableA = 0x0;
    MacroModeA = 0x0;
    MacroEnableB = 0x0;
    MacroModeB = 0x0;
    Chan[0].SerialEncCmd = 0x0;
    Chan[0].AdcOffset[0] = 0;
    Chan[0].AdcOffset[1] = 0;
    Chan[0].InCtrl = 0x7;
    Chan[0].OutCtrl = 0xf400001;
    Chan[0].PfmWidth = 0xf;
    Chan[0].Pfm = 0;
    Chan[1].SerialEncCmd = 0x0;
    Chan[1].AdcOffset[0] = 0;
    Chan[1].AdcOffset[1] = 0;
    Chan[1].InCtrl = 0x401047;
    Chan[1].OutCtrl = 0xf400002;
    Chan[1].PfmWidth = 0xf;
    Chan[1].Pfm = 0;
    Chan[2].SerialEncCmd = 0x0;
    Chan[2].AdcOffset[0] = 0;
    Chan[2].AdcOffset[1] = 0;
    Chan[2].InCtrl = 0x402047;
    Chan[2].OutCtrl = 0xf400004;
    Chan[2].PfmWidth = 0xf;
    Chan[2].Pfm = 0;
    Chan[3].SerialEncCmd = 0x0;
    Chan[3].AdcOffset[0] = 0;
    Chan[3].AdcOffset[1] = 0;
    Chan[3].InCtrl = 0x403047;
    Chan[3].OutCtrl = 0xf400008;
    Chan[3].PfmWidth = 0xf;
    Chan[3].Pfm = 0;
}

double PMGate3::PhaseFreq() {
    auto upper = std::bitset<16>(PhaseServoClockCtrl >> 16u);
    auto e = std::bitset<4>(PhaseServoClockCtrl >> 27u);
    auto f = std::bitset<12>(PhaseServoClockCtrl >> 16u);
    double result = 1.0;

    for (auto k = 0; k < 12; k++) {
        if (f[k]) {
            result += pow(2, -k);
        }
    }

    return std::pow(2, e.to_ulong()) * result * 600000000 / 16777216;
};
