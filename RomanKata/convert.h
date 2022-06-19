#include <string>

struct ArabicToRomanMapping{
	unsigned int arabicNumber;
	std::string romanNumeral;
};

const std::size_t numberOfMappings = 5;
using ArabicToRomanMappings = std::array<ArabicToRomanMapping, numberOfMappings>;
const ArabicToRomanMappings arabicToRomanMappings = {{
	{1000, "M"},
	{100, "C"},
	{ 10, "X"},
	{  4,"IV"},
	{  1, "I"}
}};

std::string convert1(unsigned int number)
{
	std::string romanNumber;
	while(number >= arabicToRomanMappings[0].arabicNumber)
	{
		romanNumber += arabicToRomanMappings[0].romanNumeral;
		number      -= arabicToRomanMappings[0].arabicNumber;
	}	
	while(number >= arabicToRomanMappings[1].arabicNumber)
	{
		romanNumber += arabicToRomanMappings[1].romanNumeral;
		number      -= arabicToRomanMappings[1].arabicNumber;
	}	
	while(number >= arabicToRomanMappings[2].arabicNumber)
	{
		romanNumber += arabicToRomanMappings[2].romanNumeral;
		number      -= arabicToRomanMappings[2].arabicNumber;
	}
	return romanNumber;
}

std::string convert(unsigned int number)
{
	std::string romanNumber;
	for(const auto& mapping : arabicToRomanMappings){
		while(number >= mapping.arabicNumber){
			romanNumber += mapping.romanNumeral;
			number 		-= mapping.arabicNumber;
		}
	}
	return romanNumber;
}
