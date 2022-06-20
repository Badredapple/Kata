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