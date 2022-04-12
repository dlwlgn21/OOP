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
	empty = empty;	������ ��ü�� �����Ϸ��� �õ��ϸ� ��� �Ǵ°�?
	strcmp�Լ��� �̿��ؼ� �׳� �ڱ��ڽ��� ��ȯ�ϰ� �߽��ϴ�.
	�̰� �������� �ǵ��Ͻ� ��� 
	���� �ùٸ��� �۵��ϰ� �� ������ �ñ��մϴ�!
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
	s3[0] = 'T';	[ ] �����ڸ� ���� ���� ������ �� �ִ°�?,
	cout << s1[0] << s1[2] << s1[3] << s1[4] << s1[5]; [ ] �����ڰ� �����ΰ�? (��� ������)
	�۵��մϴ�.
	
	�迭 ũ�Ⱑ �Ѿ�� �����Ѱ�? �� �Ϳ� ���ؼ� ������ �ֽ��ϴ�.
	��ȿ���� ���� �ε����� ������ ��쿡
	assert�� �־ ������߿� �⵵�� �ߴµ�,
	���� �˱�� assert�� ����׸�忡���� �����ϴ� �ɷ� �˰� �ֽ��ϴ�.
	��ȿ���� ���� �ε����� ��������
	��� ó�����־�� �̻����ϱ��??
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
