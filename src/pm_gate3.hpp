#ifndef MY_FIRST_CPP_PROJ_PMGATE3_HPP
#define MY_FIRST_CPP_PROJ_PMGATE3_HPP


#include <cstdint>
#include "pm_chan.hpp"

class PMGate3 {
public:
    PMGate3();

    double PhaseFreq();

    //-------------------------------------------
    // save gate array data
    //-------------------------------------------
    uint32_t PhaseServoClockCtrl{};
    uint32_t HardwareClockCtrl{};
    uint32_t DacStrobe{};
    uint32_t AdcAmpCtrl{};
    uint32_t AdcEncCtrl{};
    uint32_t ResolverCtrl{};
    uint32_t SerialEncCtrl{};
    uint32_t GpioMode[4]{};
    uint32_t GpioDir[4]{};
    uint32_t GpioPol[4]{};
    uint32_t ReadAlias[15]{};
    uint32_t WriteAlias[15]{};
    uint32_t MacroEnableA{};
    uint32_t MacroModeA{};
    uint32_t MacroEnableB{};
    uint32_t MacroModeB{};
    PMChan Chan[4]{};
};

#endif //MY_FIRST_CPP_PROJ_PMGATE3_HPP
