#include <gtest/gtest.h>
#include "Solution.h"

int main(int agrc, char ** argv)
{
	testing::InitGoogleTest(&agrc, argv);
	return RUN_ALL_TESTS();
}

TEST(LCKataTestCase, gtest_start){
	// GTEST_FAIL();
    GTEST_SUCCEED();
}

TEST(LCKataTestCase, num_to_0_1){
    int num1 = 8;
    //if num % 2 = 0;
    EXPECT_EQ(4, checkout(num1));
    int num2 = 3;
    EXPECT_EQ(3, checkout(num2));
}