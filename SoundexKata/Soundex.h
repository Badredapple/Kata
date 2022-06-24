#include <iostream>

class Soundex{
    public:
        std::string encode(const std::string &word) const{
            return word + "000";
        }

        std::string zeroPad(const std::string &word) const{
            return word + "000";
        }
};
