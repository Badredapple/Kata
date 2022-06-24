#include <gmock/gmock.h>
#include "Soundex.h"
using namespace testing;

class SoundexEncoding: public Test{
    public:
        Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
    ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZerosToEnSureTreeDigits)
{
    ASSERT_THAT(soundex.encode("I"), Eq("I000"));
    ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F(SoundexEncoding, ReplacesConsonantsWithAppropriareDigits)
{
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
    ASSERT_THAT(soundex.encode("Ac"), Eq("A200"));
    ASSERT_THAT(soundex.encode("Ad"), Eq("A300"));
    ASSERT_THAT(soundex.encode("Ax"), Eq("A200"));
}

TEST_F(SoundexEncoding, IgnoresNonAlphabetics)
{
     ASSERT_THAT(soundex.encode("A#"), Eq("A000"));
}

TEST_F(SoundexEncoding, ReplacesMultipleConsonantsWithDigits)
{
    ASSERT_THAT(soundex.encode("Acdl"), Eq("A234"));
}