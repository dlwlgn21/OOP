#include <iostream>
#include "Queue.h"

Queue::Queue() 
{
}

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
