#include <gtest/gtest.h>
#include "move.h"


int main(int agrc, char ** argv)
{
	testing::InitGoogleTest(&agrc, argv);
	return RUN_ALL_TESTS();
}


TEST(MoveSemanticKataTestCase, gtest_start){
	// GTEST_FAIL();
	GTEST_SUCCEED();
}

TEST(MoveSemanticKataTestCase, basic){
    Move v;
    f(v);
    Move const c;
    f(c);
    f(Move());
}