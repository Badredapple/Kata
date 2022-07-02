#include <gtest/gtest.h>
#include "stack.h"

int main(int agrc, char ** argv)
{
	testing::InitGoogleTest(&agrc, argv);
	return RUN_ALL_TESTS();
}


TEST(StackTemplateKataTestCase, gtest_start){
	// GTEST_FAIL();
	GTEST_SUCCEED();
}

TEST(StackTemplateKataTestCase, basic){
	Stack<int> intStack;
	intStack.empty();
	intStack.push(1);
	intStack.push(2);
	intStack.pop();
	EXPECT_EQ(1, intStack.top());

	Stack<float> fStack;
	intStack.empty();
	intStack.push(1.0);
	intStack.push(2.0);
	intStack.pop();
	EXPECT_EQ(1.0, intStack.top());
}
