#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <assert.h>
#include <iostream>
#include <string.h>

enum Mode{ NON_DELETE_MODE, DELETE_MODE };
class String
{
private:
	char* mStr;
	size_t mLength;
	char* CatString(const char* str, Mode);
public:
	String();
	String(const unsigned int mLength);
	String(const char* str);
	String(const String& other);
	~String();

	String operator+(const String& rhs);
	String operator+(const char* str);
	String& operator+=(const String& rhs);
	String& operator+=(const char* str);


	String& operator=(const String& other);
	friend std::ostream& operator<<(std::ostream& os, const String& instance);


	char& operator[](int index);
	
	const char* GetString() const;
	unsigned int GetLength() const;

};
