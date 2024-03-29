#include "pm_coord.hpp"

PMCoord::PMCoord() {
    TimeBaseSlew = 0.000100000000000000005;
    pDesTimeBase = &DesTimeBase;
    Control[0] = 0x0;
    Tm = -1;
    Td = 100;
    Ta = 100;
    Ts = 50;
    Tsd = 50;
    SegMoveTime = 20;
    AltFeedRate = 1;
    FeedTime = 1000;
    MaxFeedRate = 100000;
    FeedHoldSlew = 0.000100000000000000005;
    Gprog = 1000;
    Mprog = 1001;
    Tprog = 1002;
    Dprog = 1003;
    LHDistance = 0;
    LHSize = 0;
    RadiusErrorLimit = 0;
    MinArcLen = 0;
    PosRollOver[0] = 0;
    PosRollOver[1] = 0;
    PosRollOver[2] = 0;
    PosRollOver[3] = 0;
    PosRollOver[4] = 0;
    PosRollOver[5] = 0;
    SegOverrideSlew = 0;
    SyncOps = 8192;
    CCAddedArcBp = 0;
    CCSize = 0;
    CCDistance = 0;
    MaxCirAccel = 0;
    InPosTimeOut = 0;
    AddedDwellTime = 0;
    CornerBlendBp = 0;
    CornerDwellBp = 0;
    NoCornerBp = 0;
    CornerRadius = 0;
    CornerAccel = 0;
    TPcoords = 0x0;
    TPSize = 0;
    CornerError = 0;
    AbortTimeBase = 0;
    EndDelay = 0;
    Sprog = 0;
    Hprog = 0;
}
