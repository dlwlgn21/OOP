#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	enum BREED
	{
		BEAGLE, DOBERMAN, BERNARD, CHIWAWA, HUSKY, RETRIVER
	};
	
private:
	BREED mBreed;
public:
	Dog();
	Dog(const Dog& dog);
	~Dog();

	BREED GetBreed() const;
	void SetBreed(BREED breed);

	void Sound() override;
	void Roll();
	Animal* Clone()
	{
		return new Dog(*this);
	}
};

