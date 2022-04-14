#pragma once
#include "LinkedList.h"
class Stack : public LinkedList
{
public:
	int Delete() override;
	void PrintInfo() override;
	void ProcessUserInput(LinkedList& list) override;

};

