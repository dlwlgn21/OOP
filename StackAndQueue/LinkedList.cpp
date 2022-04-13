#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() : mNodeList {new NodeList}
{
    mNodeList->pHead = nullptr;
    mNodeList->pTail = nullptr;
}

LinkedList::~LinkedList()
{
    Node* p = mNodeList->pHead;
    if (p == nullptr) 
    {
        std::cout << "LinkedList delete Completed" << std::endl;
        return;
    }
    while (p != nullptr) 
    {
        Node* next = p->pNext;
        delete p;
        p = next;
    }
    std::cout << "LinkedList delete Completed" << std::endl;
}

bool LinkedList::Add(int value)
{
    Node* newNode{ new Node };
    if (newNode == nullptr)
    {
        std::cout << "new Node is Failed!" << std::endl;
        return false;
    }
    newNode->value = value;
    if (mNodeList->pHead == nullptr)
    {
        newNode->pPrev = nullptr;
        mNodeList->pHead = newNode;
    }
    else
    {
        mNodeList->pTail->pNext = newNode;
        newNode->pPrev = mNodeList->pTail;
    }
    newNode->pNext = nullptr;
    mNodeList->pTail = newNode;

    return true;
}

int LinkedList::Delete()
{
	return -1;
}

bool LinkedList::HasValue(const int value, int* out_value)
{
    Node* p = mNodeList->pHead;
    while (p != nullptr)
    {
        if (p->value == value) 
        {
            *out_value = value;
            return true;
        }
        p = p->pNext;
    }
	return false;
}

int LinkedList::GetValue(const int value)
{
    int retValue{ INT_MIN };
    if (HasValue(value, &retValue) == true)
    {
        return retValue;
    }
	return retValue;
}

void LinkedList::Print()
{
    Node* p = mNodeList->pHead;
    if (p == nullptr)
    {
        std::cout << "Empty!!" << std::endl;
        return;
    }
    while (p != nullptr)
    {
        std::cout << p->value << " ";
        p = p->pNext;
    }
    std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, const LinkedList& instance)
{
    LinkedList::Node* p = instance.mNodeList->pHead;
    if (p == nullptr)
    {
        os << "Empty!!";
        return os;
    }
    while (p != nullptr)
    {
        os << p->value << " ";
        p = p->pNext;
    }
    return os;
}
