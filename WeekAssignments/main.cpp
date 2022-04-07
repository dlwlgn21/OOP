#include <iostream>
#include "String.h"

int main()
{
	String str("Doggi");
	std::cout << str << std::endl;
	String catStr = str + " COOLD";

	catStr += "GArade good riri";
	std::cout << catStr << std::endl;

	str[2] = 'T';
	std::cout << str << std::endl;
	std::cout << str[3] << str[0] << std::endl;
	std::cout << catStr << std::endl;
}
