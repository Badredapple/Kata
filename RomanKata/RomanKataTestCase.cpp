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

class RomanNumeralAssert{
	public:
		RomanNumeralAssert() = delete;
		explicit RomanNumeralAssert(const unsigned int arabicNumber) :
			arabicNumberToConvert(arabicNumber){ }
		void isConvertedtoNumber(const std::string& expectedRomanNumeral) const {
			ASSERT_EQ(expectedRomanNumeral, convert(arabicNumberToConvert));
		}
	private:
		const unsigned int arabicNumberToConvert;
};

RomanNumeralAssert assertThat(const unsigned int arabicNumber){
	RomanNumeralAssert assert { arabicNumber };
	return assert;
}

TEST(RomanKataTestCase, 33_convertto_XXXIII){
	assertThat(32).isConvertedtoNumber("XXXII");
}

TEST(RomanKataTestCase, conversionOfArabicNumbers){
	assertThat(1).isConvertedtoNumber("I");
	assertThat(2).isConvertedtoNumber("II");
	assertThat(3).isConvertedtoNumber("III");
	assertThat(10).isConvertedtoNumber("X");
	assertThat(20).isConvertedtoNumber("XX");
	assertThat(30).isConvertedtoNumber("XXX");
	assertThat(32).isConvertedtoNumber("XXXII");
}