#include <string>

std::string convert(unsigned int number)
{
	std::string romanNumber;
	while(number >= 10)
	{
		romanNumber += "X";
		number-=10;
	}	
	while(number >= 1)
	{
		romanNumber += "I";
		number--;
	}
	return romanNumber;
}
