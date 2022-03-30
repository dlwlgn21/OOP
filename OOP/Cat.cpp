#include <iostream>
#include "Cat.h"

void Cat::Meow() const
{
	std::cout << "Meow..." << std::endl;
}

int Cat::GetAge() const
{
	return mAge;
}

void Cat::SetAge(int age)
{
	mAge = age;
}
