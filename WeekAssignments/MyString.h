#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <assert.h>
#include <iostream>
#include <string.h>

enum Mode{ NON_DELETE_MODE, DELETE_MODE };
class MyString
{
private:
	char* mStr;
	unsigned int mLength;
	char* CatString(const char* str, Mode);
public:
	MyString();
	MyString(const unsigned int mLength);
	MyString(const char* str);
	MyString(const MyString& other);
	~MyString();

	MyString operator+(const MyString& rhs);
	MyString operator+(const char* str);
	MyString& operator+=(const MyString& rhs);
	MyString& operator+=(const char* str);


	MyString& operator=(const MyString& other);
	friend std::ostream& operator<<(std::ostream& os, const MyString& instance);


	char& operator[](int index);
	
	const char* GetString() const;
	unsigned int GetLength() const;

};
