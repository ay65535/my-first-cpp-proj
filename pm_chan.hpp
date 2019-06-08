#ifndef MY_FIRST_CPP_PROJ_PM_CHAN_HPP
#define MY_FIRST_CPP_PROJ_PM_CHAN_HPP


class PMChan {
public:
    double SerialEncCmd = 0x0;
    double AdcOffset[2]{};
    double InCtrl{};
    double OutCtrl{};
    double PfmWidth = 0xf;
    double Pfm = 0;
    int Pwm[2]{};
    int AdcAmp[2]{};
    int PhaseCapt{};
    unsigned int Status{};
    int HomeCapt{};
    unsigned int ServoCapt{};
};

#endif //MY_FIRST_CPP_PROJ_PM_CHAN_HPP
