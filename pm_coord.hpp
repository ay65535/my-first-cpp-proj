#ifndef MY_FIRST_CPP_PROJ_PMCOORD_HPP
#define MY_FIRST_CPP_PROJ_PMCOORD_HPP


class PMCoord {
public:
    PMCoord();

    //-------------------------------------------
// save coordinate data
//-------------------------------------------
    double TimeBaseSlew = 0.000100000000000000005;
    int *pDesTimeBase;
    int Control[1]{};
    int Tm = -1;
    int Td = 100;
    int Ta = 100;
    int Ts = 50;
    int Tsd = 50;
    int SegMoveTime = 20;
    int AltFeedRate = 1;
    int FeedTime = 1000;
    int MaxFeedRate = 100000;
    double FeedHoldSlew = 0.000100000000000000005;
    int Gprog = 1000;
    int Mprog = 1001;
    int Tprog = 1002;
    int Dprog = 1003;
    int LHDistance = 0;
    int LHSize = 0;
    int RadiusErrorLimit = 0;
    int MinArcLen = 0;
    int PosRollOver[6]{};
    int SegOverrideSlew = 0;
    int SyncOps = 8192;
    int CCAddedArcBp = 0;
    int CCSize = 0;
    int CCDistance = 0;
    int MaxCirAccel = 0;
    int InPosTimeOut = 0;
    int AddedDwellTime = 0;
    int CornerBlendBp = 0;
    int CornerDwellBp = 0;
    int NoCornerBp = 0;
    int CornerRadius = 0;
    int CornerAccel = 0;
    int TPcoords = 0x0;
    int TPSize = 0;
    int CornerError = 0;
    int AbortTimeBase = 0;
    int EndDelay = 0;
    int Sprog = 0;
    int Hprog = 0;
    int DesTimeBase;
};


#endif //MY_FIRST_CPP_PROJ_PMCOORD_HPP
