#include <iostream>
#include "MyString.h"

int main()
{
	MyString str("Doggi");
	std::cout << str << std::endl;
	MyString catStr = str + " COOLD";

	catStr += "GArade good riri";
	std::cout << catStr << std::endl;

	str[2] = 'T';
	std::cout << str << std::endl;
	std::cout << str[3] << std::endl;
	std::cout << catStr << std::endl;
}
