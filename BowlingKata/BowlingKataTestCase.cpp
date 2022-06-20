#include <gtest/gtest.h>
#include "bowling.h"

int main(int agrc, char ** argv)
{
	testing::InitGoogleTest(&agrc, argv);
	return RUN_ALL_TESTS();
}


TEST(BowlingKataTestCase, gtest_start){
	// GTEST_FAIL();
	GTEST_SUCCEED();
}

TEST(BowlingKataTestCase, game_start){
    Game g;
    for(int i = 0; i < 20; i++)
        g.roll(0);
    EXPECT_EQ(0, g.total_score());
}

TEST(BowlingKataTestCase, game_start_roll_1){
    Game g;
    for(int i = 0; i < 20; i++)
        g.roll(1);
    EXPECT_EQ(20, g.total_score());
}

TEST(BowlingKataTestCase, one_spare){
    Game g;
    for(int i = 0; i < 2; i++)
        g.roll(5);
    g.roll(7);
    for(int i = 0; i < 17; i++)
    g.roll(0);
    EXPECT_EQ(24, g.total_score());
}

TEST(BowlingKataTestCase, oneStrike){
    Game g;
    g.roll(10);
    g.roll(2);
    g.roll(3);
    for(int i = 0; i < 16; i++)
        g.roll(0);
    EXPECT_EQ(20, g.total_score());
}

TEST(BowlingKataTestCase, perfectGame){
    Game g;
    for(int i = 0; i < 12; i++)
        g.roll(10);
    EXPECT_EQ(300, g.total_score());
}