#include <gmock/gmock.h>
#include "Soundex.h"
using testing::Eq;

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
    Soundex soundex;
    auto encoded = soundex.encode("A");
    ASSERT_THAT(encoded, Eq("A000"));
}

TEST(SoundexEncoding, PadsWithZerosToEnSureTreeDigits)
{
    Soundex soundex;
    auto encoded = soundex.zeroPad("I");
    ASSERT_THAT(encoded, Eq("I000"));
    auto encoded = soundex.zeroPad("A");
    ASSERT_THAT(encoded, Eq("A000"));
}