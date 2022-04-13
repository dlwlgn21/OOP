#include <iostream>
#include "Dog.h"

Dog::Dog() : mBreed{ RETRIVER }
{
    std::cout << "[Dog] constructor!!" << std::endl;

}



Dog::~Dog()
{
    std::cout << "[Dog] destructor!!" << std::endl;
}
Dog::Dog(const Dog& dog)
{
    mWeight = dog.mWeight;
    mAge = dog.mAge;
    mBreed = dog.mBreed;
}

// ��ȯŸ���� Dog class �ܺο� ���ϹǷ� �����ذ� ������ �������.
Dog::BREED Dog::GetBreed() const
{
    return mBreed;
}

void Dog::SetBreed(BREED breed)
{
    mBreed = breed;
}

void Dog::Sound()
{
    std::cout << "WAL WAL!!" << std::endl;
}

void Dog::Roll()
{
    std::cout << "Rolling..." << std::endl;
}
