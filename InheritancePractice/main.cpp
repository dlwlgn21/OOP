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

int main()
{
	MyFunctions mf;

	mf.NomalFunc(1);
	std::cout << Sigma(mf, &MyFunctions::NomalFunc, 1, 10) << std::endl;
	std::cout << Sigma(mf, &MyFunctions::SquareFunc, 1, 10) << std::endl;

#if 0
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