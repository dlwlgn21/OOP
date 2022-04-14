#include <iostream>
#include "Warrior.h"



class MyFunctions
{
public:
	int mValue;

	int NomalFunc(int x)
	{
		return x;
	}
	int SquareFunc(int x)
	{
		return x * x;
	}
};

using FuncPtr = int (MyFunctions::*)(int);

int Sigma(MyFunctions& instance, FuncPtr f, int m, int n)
{
	int sum{};
	for (int i = m; i <= n; ++i)
	{
		sum += (instance.*f)(i);
	}
	return sum;
}

void Sort(int input[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (input[i] > input[j])
			{
				int temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}

int main()
{ 
	int array[]{ 5, 3, 2, 4, 1 };
	Sort(array, 5);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << array[i] << std::endl;
	}


#if 0
	MyFunctions mf;

	mf.NomalFunc(1);
	std::cout << Sigma(mf, &MyFunctions::NomalFunc, 1, 10) << std::endl;
	std::cout << Sigma(mf, &MyFunctions::SquareFunc, 1, 10) << std::endl;

	float x = 10.5f;
	float y = static_cast<int>(x);



	Character* pHero = new Warrior;
	pHero->Attack();
	
	//괄호 중요 
	// (Warrior*)pHero->DoubleSlash(); 
	// 이러면 반환값을 형변환 한다는 의미가 되버린다.
	Warrior* pWarrior = dynamic_cast<Warrior*>(pHero);
	// 반드시 올바르게 됐는지 체크해주어야 한다!!
	if (pWarrior == nullptr) 
	{
		std::cout << "ERROR" << std::endl;
	}
	else
	{
		pWarrior->DoubleSlash();
	}
	delete pHero;

#endif

}