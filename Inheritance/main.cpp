#include <iostream>
#include "Dog.h"

int main() 
{
	Dog happy;
	happy.Sound();
	happy.Roll();

	//Animal anim = happy; //이러면 복사 일어나서 새로운 객체 만들어짐.
	Animal* anim = &happy;
	anim->Sound();

	Animal* pAnim = new Dog;

	// 중요한 문제가 숨어있음
	delete pAnim;
	// 삭제를 Animal만 함.
}
