#include <iostream>
#include "Stack.h"
#include "Queue.h"


enum Command
{
    ADD = 1,
    DELETE = 2,
    EXIT = 3
};




void ProcessUserInput(LinkedList& list)
{
    list.PrintInfo();
    int command{};
    bool isExit{ false };
    while (command != EXIT)
    {
        std::cout << std::endl << ">";
        std::cin >> command;

        switch (command)
        {
        case ADD:
        {
            int value;
            std::cout << "Queue Value >> ";
            std::cin >> value;
            list.Add(value);
            break;
        }
        case DELETE:
            list.Delete();
            break;
        case EXIT:
            isExit = true;
            break;
        default:
            std::cout << "잘못된 명령어 입니다!" << std::endl;
            break;
        }
        list.Print();

        if (isExit)
        {
            break;
        }
    }

}
int main()
{
    LinkedList* queue = new Queue;
    ProcessUserInput(*queue);

    LinkedList* stack = new Stack;
    ProcessUserInput(*stack);
}