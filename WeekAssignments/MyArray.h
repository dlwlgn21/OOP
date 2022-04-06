#pragma once
class MyArray
{
private:
	int mArray[10];
public:
	MyArray() : mArray{}
	{
	}

	int& operator[](int index)
	{
		return mArray[index];
	}
};

