#pragma once
#include "LinkedList.h"
class Stack : public LinkedList
{
public:
	Stack();
	int Delete() override;
};

