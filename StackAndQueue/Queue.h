#pragma once
#include "LinkedList.h"
class Queue : public LinkedList
{
public:
	Queue();
	int Delete() override;
};

