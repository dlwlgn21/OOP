#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include "String.h"


String::String() : mLength{}
{
	mStr = new char[1];
	assert(mStr != nullptr);
	*mStr = '\0';
}
String::String(const unsigned int length) : mLength{ length }
{
	mStr = new char[mLength + 1];
	assert(mStr != nullptr);

}
String::String(const char* str)
{
	mLength = strlen(str);
	mStr = new char[mLength + 1];
	assert(mStr != nullptr);

	strcpy(mStr, str);
	mStr[mLength] = '\0';

}
String::String(const String& other) : mLength {other.mLength}
{
	mStr = new char[mLength + 1];
	assert(mStr != nullptr);

	strcpy(mStr, other.mStr);
	mStr[mLength] = '\0';

}
char* String::CatString(const char* str, Mode mode)
{
	size_t cat_lenth = strlen(str) + mLength;
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
String String::operator+(const String& rhs)
{
	String result(CatString(rhs.mStr, NON_DELETE_MODE));
	return result;
}
String String::operator+(const char* str)
{
	String result(CatString(str, NON_DELETE_MODE));
	return result;
}

String& String::operator+=(const String& rhs)
{
	mStr = CatString(rhs.mStr, DELETE_MODE);
	mLength = strlen(mStr);
	return *this;
}
String& String::operator+=(const char* str)
{
	mStr = CatString(str, DELETE_MODE);
	mLength = strlen(mStr);
	return *this;
}


String& String::operator=(const String& other)
{
	/*
	empty = empty;	동일한 객체를 배정하려고 시도하면 어떻게 되는가?
	strcmp함수를 이용해서 그냥 자기자신을 반환하게 했습니다.
	이게 선생님이 의도하신 대로 
	제가 올바르게 작동하게 한 것인지 궁금합니다!
	*/
	if (strcmp(mStr, other.mStr) == 0) {
		return *this;
	}
	delete[] mStr;
	mStr = new char[other.mLength + 1];
	mLength = other.mLength;
	strcpy(mStr, other.mStr);
	mStr[mLength] = '\0';

	return *this;
}

char& String::operator[](int index)
{
	/*
	s3[0] = 'T';	[ ] 연산자를 통해 값을 수정할 수 있는가?,
	cout << s1[0] << s1[2] << s1[3] << s1[4] << s1[5]; [ ] 연산자가 정상인가? (상수 연산자)
	작동합니다.
	
	배열 크기가 넘어가도 안전한가? 이 것에 대해서 질문이 있습니다.
	유효하지 않은 인덱스가 들어왔을 경우에
	assert를 넣어서 디버깅중에 잡도록 했는데,
	제가 알기로 assert는 디버그모드에서만 동작하는 걸로 알고 있습니다.
	유효하지 않은 인덱스가 들어왔을때
	어떻게 처리해주어야 이상적일까요??
	*/
	assert(index <= mLength && index >= 0);
	return mStr[index];
}

String::~String()
{
	delete[] mStr;
}
std::ostream& operator<<(std::ostream& os, const String& instance)
{
	os << instance.mStr;
	return os;
}
const char* String::GetString() const
{
	return mStr;
}
size_t String::GetLength() const
{
	return mLength;
}
