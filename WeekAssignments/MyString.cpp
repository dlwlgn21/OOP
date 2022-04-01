#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"

MyString::MyString(const char* str)
{
	mLength = strlen(str);
	mStr = new char[mLength + 1];
	strcpy(mStr, str);
	mStr[mLength] = '\0';
}

MyString::~MyString()
{
	std::cout << "IN MyString::~MyString Called." << std::endl;
	delete[] mStr;
}
unsigned int MyString::GetLength() const
{
	return mLength;
}
void MyString::Print() const
{
	std::cout << mStr << std::endl;
}