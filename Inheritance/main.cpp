#include <iostream>
#include "Dog.h"
class ClassA
{
public:
	void Func1()
	{
		std::cout << "ClassA::Func1()" << std::endl;
	}
	virtual void Func2()
	{
		std::cout << "ClassA::Func2()" << std::endl;
	}
};

class ClassB : public ClassA
{
public:
	void Func1()
	{
		std::cout << "ClassB::Func1()" << std::endl;
	}
	void Func2()
	{
		std::cout << "ClassB::Func2()" << std::endl;
	}
};

class ClassC : public ClassB
{
	void Func1()
	{
		std::cout << "ClassC::Func1()" << std::endl;
	}
	void Func2()
	{
		std::cout << "ClassC::Func2()" << std::endl;
	}
};

int main() 
{
	Animal* pAnim = new Dog;
	pAnim->Sound();
	Animal* copy = pAnim->Clone();
	copy->Sound();
	// 중요한 문제가 숨어있음
	delete pAnim;
	// 삭제를 Animal만 함.
	

#if 0
	Dog happy;

	//Animal anim = happy; //이러면 복사 일어나서 새로운 객체 만들어짐.
	Animal* anim = &happy;
	anim->Sound();

	ClassA* a = new ClassA;
	ClassB* b = new ClassB;
	a->Func1(); // 일반 멤버함수
	a->Func2(); // 가상 멤버함수
	b->Func1(); // 멤버 함수 오버라이딩
	b->Func2(); // 가상 멤버함수 오버라이딩

	ClassA* p = b;
	p->Func1(); // ClassA의 멤버함수
	p->Func2(); // ClassA의 가상 멤버함수 -> p의 실제 타입 -> ClassB의 오버라이딩 함수
	ClassC* c = new ClassC;
	p = c;
	p->Func1(); // ClassA의 멤버함수
	p->Func2(); // ClassA의 가상 멤버함수 -> p의 실제 타입 -> ClassC의 오버라이딩 함수


#endif
}
