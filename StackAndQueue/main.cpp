#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
	Queue queue;

	queue.Add(1);
	queue.Add(2);
	queue.Add(3);

	queue.Print();
	std::cout << queue.Delete() << std::endl;
	queue.Print();
	std::cout << queue.Delete() << std::endl;
	queue.Print();
	std::cout << queue.Delete() << std::endl;
	queue.Print();

	queue.Add(15);

	queue.Print();
	queue.Delete();

	std::cout << queue << std::endl;
	queue.Delete();
	std::cout << queue << std::endl;
	queue.Add(100);
	queue.Add(200);
	std::cout << queue << std::endl;
	queue.Delete();
	std::cout << queue << std::endl;

	std::cout << "-----------------------" << std::endl;

	Stack stack;

	stack.Add(1);
	stack.Add(2);
	stack.Add(3);

	std::cout << stack << std::endl;
	stack.Delete();
	std::cout << stack << std::endl;
	stack.Delete();
	std::cout << stack << std::endl;


}