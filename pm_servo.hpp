//
// Created by ay65535 on 2019-06-07.
//


#ifndef MY_FIRST_CPP_PROJ_PM_SERVO_HPP
#define MY_FIRST_CPP_PROJ_PM_SERVO_HPP


class PMServo {
public:
    PMServo();

    double Ke1 = 0;
    double Ke2 = 0;
    double Kf1 = 0;
    double Kf2 = 0;
    double Ka0 = 1;
    double Ka1 = 0;
    double Ka2 = 0;
    double Ka3 = 0;
    double Ka4 = 0;
    double Ka5 = 0;
    double Ka6 = 0;
    double Ka7 = 0;
    double Kb0 = 1;
    double Kb1 = 0;
    double Kb2 = 0;
    double Kb3 = 0;
    double Kb4 = 0;
    double Kb5 = 0;
    double Kb6 = 0;
    double Kb7 = 0;
    double Kc1 = 0;
    double Kc2 = 0;
    double Kc3 = 0;
    double Kc4 = 0;
    double Kc5 = 0;
    double Kc6 = 0;
    double Kc7 = 0;
    double Kd1 = 0;
    double Kd2 = 0;
    double Kd3 = 0;
    double Kd4 = 0;
    double Kd5 = 0;
    double Kd6 = 0;
    double Kd7 = 0;
    double Kp = 8.2786388;
    double Kvifb = 0;
    double Kviff = 0;
    double Kvfb = 141.89391;
    double Kvff = 1200;
    double Kafb = 0;
    double Kaff = 1240.8306;
    double Ki = 9.9999997e-05;
    double Kfff = 12;
    double MaxPosErr = 10000;
    double MaxInt = 28000;
    double BreakPosErr = 0;
    double Kbreak = 0;
    double OutDbOn = 0;
    double OutDbOff = 0;
    double OutDbSeed = 0;
    double SwPoly7 = 0;
    double SwFffInt = 0;
    double SwZvInt = 0;
    double Kxpg = 0;
    double Kxvg = 0;
    double Kxig = 0;
    double EstTime = 0;
    double EstMinDac = 0;
    double NominalGain = 0;
    double MinGainFactor = 1;
    double MaxGainFactor = 1;
    double MaxW = 0;
    double MaxDR = 0;
    double MinW = 0;
    double MinDR = 0;
    double pVelOut = 0;
    double pAccOut = 0;
};


#endif //MY_FIRST_CPP_PROJ_PM_SERVO_HPP
