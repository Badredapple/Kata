#include <gtest/gtest.h>
#include "person.h"

int main(int agrc, char ** argv)
{
	testing::InitGoogleTest(&agrc, argv);
	return RUN_ALL_TESTS();
}


TEST(SpecialMemTemplKataTestCase, gtest_start){
	// GTEST_FAIL();
	GTEST_SUCCEED();
}

TEST(SpecialMemTemplKataTestCase, basics){
    std::string s = "sname";
    Person p1(s);
    Person p2("tmp");
    Person p3(p1);
    Person p4(std::move(p1));
}