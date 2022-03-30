#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "Student.h"

Student::Student()
{

}
Student::Student(const char* name, const unsigned int number, const unsigned int score)
{
	SetName(name);
	SetNumber(number);
	SetScore(score);
}

char* Student::GetName() const
{
	return (char*)mName;
}
unsigned int Student::GetNumber() const
{
	return mNumber;
}
unsigned int Student::GetScore() const
{
	return mScore;
}

void Student::SetName(const char* name)
{
	if (strlen(name) >= NAME_LENGTH) 
	{
		std::cout << "Max length of name is 31." << std::endl;
		return;
	}
	strcpy(mName, name);
}
void Student::SetNumber(const unsigned int number)
{
	mNumber = number;
}
void Student::SetScore(const unsigned int score)
{
	mScore = score;
}