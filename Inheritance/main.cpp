#include <iostream>
#include "Dog.h"

int main() 
{
	Dog happy;
	happy.Sound();
	happy.Roll();

	//Animal anim = happy; //�̷��� ���� �Ͼ�� ���ο� ��ü �������.
	Animal* anim = &happy;
	anim->Sound();

	Animal* pAnim = new Dog;

	// �߿��� ������ ��������
	delete pAnim;
	// ������ Animal�� ��.
}
