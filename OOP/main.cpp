#include <iostream>

class ClassA
{
public:
	ClassA()
	{
		std::cout << "[ClassA] Constructor" << std::endl;
	}
};

class ClassB
{
	ClassA mA;
public:
	ClassB()
	{
		std::cout << "[ClassB] Constructor" << std::endl;
	}
};

class Quest
{
private:
	const int mId;
	int mExp;
public:
	// member initializer list
	Quest() : mId{ 1 }, mExp{ 1 }
	{
		std::cout << "Quest()" << std::endl;
	}

	Quest(std::string excel) : Quest() // delegate constructor
	{
		std::cout << "Quest(string)" << std::endl;

	}
	~Quest()
	{
		std::cout << "this object destructed" << std::endl;
	}
	void Print()
	{
		std::cout << "ID : " << mId << ", EXP " << mExp << std::endl;
	}
};

class MyArray
{
private:
	int mLength;
	int* mArray;
public:
	MyArray(int length) : mLength{ length }
	{
		mArray = new int[length] {};
	}
	~MyArray()
	{
		std::cout << "mArray of MyArray is deleted" << std::endl;
		delete[] mArray;
		mArray = nullptr;
	}
};
int main()
{
	MyArray* myArray{new MyArray(20)};
	delete myArray;
}
