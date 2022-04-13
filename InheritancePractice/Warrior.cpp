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

void Warrior::Dead() const
{
	std::cout << "\tWarrior is DEAD" << std::endl;
}

void Warrior::DoubleSlash() const
{
	std::cout << "\tWarrior Double Swing Sword!!" << std::endl;

}
