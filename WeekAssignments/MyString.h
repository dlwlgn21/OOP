#pragma once
#include <iostream>
#include <string.h>
class MyString
{
private:
	char* mStr;
	unsigned int mLength;
public:
	MyString(const char* str);
	~MyString();
	unsigned int GetLength() const;
	void Print() const;
};