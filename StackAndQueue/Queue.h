#pragma once
#include "LinkedList.h"
class Queue : public LinkedList
{
public:
	int Delete() override;
	void PrintInfo() override;
	void ProcessUserInput(LinkedList& list) override;

};

