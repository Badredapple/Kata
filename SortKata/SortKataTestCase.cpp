#include <gtest/gtest.h>
#include "sort1.h"

int main(int agrc, char ** argv)
{
	testing::InitGoogleTest(&agrc, argv);
	return RUN_ALL_TESTS();
}

TEST(SortKataTestCase, gtest_start){
	// GTEST_FAIL();
	GTEST_SUCCEED();
}

TEST(SortKataTestCase, Sort_1){
    vector<int> asList = { };
    EXPECT_EQ(asList, sort(asList));
}

TEST(SortKataTestCase, Sort_1_2){
    vector<int> asList  = {2, 1};
    vector<int> tarList = {1, 2};
    EXPECT_EQ(tarList, sort(asList));
}

TEST(SortKataTestCase, Sort_1_3){
    vector<int> asList1  = {1, 2, 3};
    vector<int> asList2  = {2, 1, 3};
    vector<int> asList3  = {2, 3, 1};
    vector<int> asList4  = {3, 2, 1};

    vector<int> tarList  = {1, 2, 3};

    EXPECT_EQ(tarList, sort(asList1));
    EXPECT_EQ(tarList, sort(asList2));
    EXPECT_EQ(tarList, sort(asList3));
    EXPECT_EQ(tarList, sort(asList4));

    vector<int> asList5  = {9,7,8,6,5,4, 3, 2, 1};
    vector<int> tarList1 = {1,2,3,4,5,6,7,8,9};
    EXPECT_EQ(tarList1, sort(asList5));
}

TEST(SortKataTestCase, Sort_2_2){
    vector<int> asList  = {2, 1};
    vector<int> tarList = {1, 2};
    GTEST_SUCCEED();
    EXPECT_EQ(tarList, sort_2(asList));
}

TEST(SortKataTestCase, Sort_2_3){
    vector<int> asList1  = {1, 2, 3};
    // vector<int> asList2  = {2, 1, 3};
    // vector<int> asList3  = {2, 3, 1};
    // vector<int> asList4  = {3, 2, 1};

    vector<int> tarList  = {1, 2, 3};

    EXPECT_EQ(tarList, sort_2(asList1));
    // EXPECT_EQ(tarList, sort(asList2));
    // EXPECT_EQ(tarList, sort(asList3));
    // EXPECT_EQ(tarList, sort(asList4));
}