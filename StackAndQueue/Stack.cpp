#include <iostream>
#include "Stack.h"

Stack::Stack()
{
}

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
