#include <gtest/gtest.h>
#include "stack.h"
#include <vector>

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

TEST(StackTemplateKataTestCase, convert){
	Stack<int> intStack;
	intStack.empty();
	intStack.push(1);
	intStack.push(2);

	Stack<float> fStack;
	fStack = intStack;
	EXPECT_EQ(2.0, fStack.top());
}

// template template parameters
TEST(StackTemplateKataTestCase, template_tempalet_parameters){
	Stack<double, std::vector> vStack;
	vStack.push(5.5);
	vStack.push(6.6);
	EXPECT_EQ(6.6, vStack.top());
}