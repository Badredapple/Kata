#include <gtest/gtest.h>
#include "convert.h"

int main(int agrc, char ** argv)
{
	testing::InitGoogleTest(&agrc, argv);
	return RUN_ALL_TESTS();
}


TEST(RomanKataTestCase, 1_convertto_I1){
	// GTEST_FAIL();
	// GTEST_SUCCEED();
	ASSERT_EQ("I", convert(1));
}

TEST(RomanKataTestCase, 2_convertto_II){
	ASSERT_EQ("II", convert(2));
}

TEST(RomanKataTestCase, 3_convertto_III){
	ASSERT_EQ("III", convert(3));
}

TEST(RomanKataTestCase, 10_convertto_X){
	ASSERT_EQ("X", convert(10));
}

TEST(RomanKataTestCase, 20_convertto_XX){
	ASSERT_EQ("XX", convert(20));
}

TEST(RomanKataTestCase, 30_convertto_XXX){
	ASSERT_EQ("XXX", convert(30));
}