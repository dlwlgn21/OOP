#include <iostream>
#include "Queue.h"

int Queue::Delete()
{
    if (mNodeList->pHead == nullptr)
    {
        std::cout << "this Queue is EMPTY!!" << std::endl;
        return INT_MIN;
    }

    int retValue = mNodeList->pHead->value;
    Node* temp = mNodeList->pHead;
    if (mNodeList->pHead == mNodeList->pTail)
    {
        delete temp;
        mNodeList->pHead = nullptr;
        mNodeList->pTail = nullptr;
        return retValue;
    }
    mNodeList->pHead = mNodeList->pHead->pNext;
    mNodeList->pHead->pPrev = nullptr;
    delete temp;

    return retValue;
}

void Queue::PrintInfo()
{
    std::cout << "<DynamicQueue>" << std::endl;
    std::cout << "[1] Enqueue" << std::endl;
    std::cout << "[2] Dequeue" << std::endl;
    std::cout << "[3] Exit" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void Queue::ProcessUserInput(LinkedList& list)
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
