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
	Quest(int id, int exp) : mId{ id }, mExp{ exp }
	{
	}

	void Print()
	{
		std::cout << "ID : " << mId << ", EXP " << mExp << std::endl;
	}
};
int main()
{
	Quest q1(1, 10);
	q1.Print();
}
