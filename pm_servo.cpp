//
// Created by ay65535 on 2019-06-07.
//


#include "pm_servo.hpp"


PMServo::PMServo() {
    Ke1 = 0;
    Ke2 = 0;
    Kf1 = 0;
    Kf2 = 0;
    Ka0 = 1;
    Ka1 = 0;
    Ka2 = 0;
    Ka3 = 0;
    Ka4 = 0;
    Ka5 = 0;
    Ka6 = 0;
    Ka7 = 0;
    Kb0 = 1;
    Kb1 = 0;
    Kb2 = 0;
    Kb3 = 0;
    Kb4 = 0;
    Kb5 = 0;
    Kb6 = 0;
    Kb7 = 0;
    Kc1 = 0;
    Kc2 = 0;
    Kc3 = 0;
    Kc4 = 0;
    Kc5 = 0;
    Kc6 = 0;
    Kc7 = 0;
    Kd1 = 0;
    Kd2 = 0;
    Kd3 = 0;
    Kd4 = 0;
    Kd5 = 0;
    Kd6 = 0;
    Kd7 = 0;
    Kp = 8.2786388;
    Kvifb = 0;
    Kviff = 0;
    Kvfb = 141.89391;
    Kvff = 1200;
    Kafb = 0;
    Kaff = 1240.8306;
    Ki = 9.9999997e-05;
    Kfff = 12;
    MaxPosErr = 10000;
    MaxInt = 28000;
    BreakPosErr = 0;
    Kbreak = 0;
    OutDbOn = 0;
    OutDbOff = 0;
    OutDbSeed = 0;
    SwPoly7 = 0;
    SwFffInt = 0;
    SwZvInt = 0;
    Kxpg = 0;
    Kxvg = 0;
    Kxig = 0;
    EstTime = 0;
    EstMinDac = 0;
    NominalGain = 0;
    MinGainFactor = 1;
    MaxGainFactor = 1;
    MaxW = 0;
    MaxDR = 0;
    MinW = 0;
    MinDR = 0;
    pVelOut = 0;
    pAccOut = 0;
}
