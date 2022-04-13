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
	// �߿��� ������ ��������
	delete pAnim;
	// ������ Animal�� ��.
	

#if 0
	Dog happy;

	//Animal anim = happy; //�̷��� ���� �Ͼ�� ���ο� ��ü �������.
	Animal* anim = &happy;
	anim->Sound();

	ClassA* a = new ClassA;
	ClassB* b = new ClassB;
	a->Func1(); // �Ϲ� ����Լ�
	a->Func2(); // ���� ����Լ�
	b->Func1(); // ��� �Լ� �������̵�
	b->Func2(); // ���� ����Լ� �������̵�

	ClassA* p = b;
	p->Func1(); // ClassA�� ����Լ�
	p->Func2(); // ClassA�� ���� ����Լ� -> p�� ���� Ÿ�� -> ClassB�� �������̵� �Լ�
	ClassC* c = new ClassC;
	p = c;
	p->Func1(); // ClassA�� ����Լ�
	p->Func2(); // ClassA�� ���� ����Լ� -> p�� ���� Ÿ�� -> ClassC�� �������̵� �Լ�


#endif
}
