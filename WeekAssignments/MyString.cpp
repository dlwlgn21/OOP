#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include "MyString.h"


MyString::MyString() : mLength{}
{
	mStr = new char[1];
	assert(mStr != nullptr);
	*mStr = '\0';
	std::cout << "MyString()" << std::endl;
}
MyString::MyString(const unsigned int length) : mLength{ length }
{
	mStr = new char[mLength + 1];
	assert(mStr != nullptr);
	std::cout << "MyString(const unsigned int length)" << std::endl;

}
MyString::MyString(const char* str)
{
	mLength = strlen(str);
	mStr = new char[mLength + 1];
	assert(mStr != nullptr);

	strcpy(mStr, str);
	mStr[mLength] = '\0';
	std::cout << "MyString(const char* str)" << std::endl;

}
MyString::MyString(const MyString& other) : mLength {other.mLength}
{
	mStr = new char[mLength + 1];
	assert(mStr != nullptr);

	strcpy(mStr, other.mStr);
	mStr[mLength] = '\0';
	std::cout << "Copy Constructor called" << std::endl;

}
char* MyString::CatString(const char* str, Mode mode)
{
	int cat_lenth = strlen(str) + mLength;
	char* temp = new char[cat_lenth + 1];
	assert(temp != nullptr);

	strcpy(temp, mStr);
	strcat(temp, str);
	temp[cat_lenth] = '\0';
	if (mode == DELETE_MODE) 
	{
		delete[] mStr;
	}
	return temp;
}
MyString MyString::operator+(const MyString& rhs)
{
	MyString result(CatString(rhs.mStr, NON_DELETE_MODE));
	std::cout << "operator overloading + (const MyString& rhs) called" << std::endl;
	return result;
}
MyString MyString::operator+(const char* str)
{
	MyString result(CatString(str, NON_DELETE_MODE));
	std::cout << "operator overloading + (const char* str) called" << std::endl;
	return result;
}

MyString& MyString::operator+=(const MyString& rhs)
{
	mStr = CatString(rhs.mStr, DELETE_MODE);
	return *this;
}
MyString& MyString::operator+=(const char* str)
{
	mStr = CatString(str, DELETE_MODE);
	return *this;
}


MyString& MyString::operator=(const MyString& other)
{
	mStr = new char[other.mLength + 1];
	mLength = other.mLength;
	strcpy(mStr, other.mStr);
	mStr[mLength] = '\0';
	std::cout << "operator overloading = called" << std::endl;

	return *this;
}

char& MyString::operator[](int index)
{
	std::cout << "operator overloading [] called" << std::endl;
	return mStr[index];
}

MyString::~MyString()
{
	std::cout << "IN MyString::~MyString Called." << std::endl;
	delete[] mStr;
}
std::ostream& operator<<(std::ostream& os, const MyString& instance)
{
	os << instance.mStr;
	return os;
}
const char* MyString::GetString() const
{
	return mStr;
}
unsigned int MyString::GetLength() const
{
	return mLength;
}
