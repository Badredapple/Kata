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

TEST(LCKataTestCase, LC_2000_1)
{
    string word = "aaa";
    char    ch  =  'a';
    string ans  = "aaa";

    EXPECT_EQ(ans,checkout(word, ch));
}

TEST(LCKataTestCase, LC_2000_2)
{
    string word1 = "ma";
    char    ch1  =  'b';
    string ans1  = "baa";

    EXPECT_EQ(false,checkout1(word1, ch1));
}

TEST(LCKataTestCase, LC_2000_3)
{
    string word2 = "abcdef";
    char    ch2  =  'b';
    string ans2  = "fedcba";

    EXPECT_EQ(ans2,checkout2(word2, ch2));
}

TEST(LCKataTestCase, LC_2000)
{
    string word2 = "abcdef";
    char    ch2  =  'b';
    string ans2  = "bacdef";

    EXPECT_EQ(ans2,checkout3(word2, ch2));
}