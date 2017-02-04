#include "wqupc/wqupc.h"
#include "gtest/gtest.h"

using org::xaepient::wqupc::WQUPC;

TEST(wqupc, defaultConstructor)
{
    WQUPC wqupc;
}

TEST(wqupc, join1)
{
    WQUPC wqupc(2);
    EXPECT_FALSE(wqupc.connected(0,1));
    wqupc.join(0,1);
    EXPECT_TRUE(wqupc.connected(0,1));
}

TEST(wqupc, join2)
{
    WQUPC wqupc(8);
    wqupc.join(0,2);
    wqupc.join(0,4);
    wqupc.join(1,3);
    wqupc.join(3,5);
    EXPECT_TRUE(wqupc.connected(0,4));
    EXPECT_TRUE(wqupc.connected(0,4));
    EXPECT_TRUE(wqupc.connected(2,4));
    EXPECT_FALSE(wqupc.connected(0,1));
    EXPECT_FALSE(wqupc.connected(0,3));
    EXPECT_FALSE(wqupc.connected(0,5));
    EXPECT_TRUE(wqupc.connected(1,3));
    EXPECT_TRUE(wqupc.connected(1,5));
    EXPECT_FALSE(wqupc.connected(0,6));
    EXPECT_FALSE(wqupc.connected(0,7));
    EXPECT_FALSE(wqupc.connected(6,7));
    EXPECT_FALSE(wqupc.connected(5,7));
    EXPECT_FALSE(wqupc.connected(4,6));
    EXPECT_FALSE(wqupc.connected(3,7));
    EXPECT_FALSE(wqupc.connected(1,7));
}
