#include "pm_gate3.hpp"
#include <gtest/gtest.h>

TEST(PhaseFreq, normal)
{
    PMGate3 Gate3 = {};
    EXPECT_DOUBLE_EQ(4000.961780548095703125, Gate3.PhaseFreq());
}
