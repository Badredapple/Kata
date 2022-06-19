#include <string>

std::string convert(unsigned int number)
{
	std::string romanNumber;
	if(number == 10)
		return "X";	
	while(number >= 1)
	{
		romanNumber += "I";
		number--;
	}
	return romanNumber;
}
