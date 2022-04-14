#include <iostream>
#include "Stack.h"

int Stack::Delete()
{
    if (mNodeList->pHead == nullptr) 
    {
        std::cout << "this Stack is EMPTY!!" << std::endl;
        return INT_MIN;
    }
    int retValue = mNodeList->pTail->value;
    LinkedList::Node* temp = mNodeList->pTail;
    if (mNodeList->pHead == mNodeList->pTail) 
    {
        delete temp;
        mNodeList->pHead = nullptr;
        mNodeList->pTail = nullptr;
        return retValue;
    }
    mNodeList->pTail = mNodeList->pTail->pPrev;
    mNodeList->pTail->pNext = nullptr;
    delete temp;

    return retValue;
}

void Stack::PrintInfo()
{
    std::cout << "<DynamicStack>" << std::endl;
    std::cout << "[1] Push" << std::endl;
    std::cout << "[2] Pop" << std::endl;
    std::cout << "[3] Exit" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void Stack::ProcessUserInput(LinkedList& list)
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
            std::cout << "Push Value >> ";
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
