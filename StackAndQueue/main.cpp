#include <iostream>
#include "Stack.h"
#include "Queue.h"


int main()
{
    LinkedList* queue = new Queue;
    queue->ProcessUserInput(*queue);

    LinkedList* stack = new Stack;
    stack->ProcessUserInput(*stack);
}