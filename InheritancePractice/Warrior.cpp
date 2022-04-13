#include <iostream>
#include "Warrior.h"

Warrior::Warrior()
{
}

Warrior::~Warrior()
{
}

void Warrior::Attack() const
{
	std::cout << "\tWarrior Swing Sword!!" << std::endl;
}
