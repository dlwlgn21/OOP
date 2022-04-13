#pragma once

class LinkedList
{
protected:
	struct Node
	{
		int value;
		Node* pNext;
		Node* pPrev;
	};
	struct NodeList
	{
		Node* pHead;
		Node* pTail;
	};
	NodeList* mNodeList;
private:
	bool HasValue(const int value, int* out_value);
public:
	LinkedList();
	virtual ~LinkedList();

	bool Add(int value);
	virtual int Delete();
	int GetValue(const int value);
	void Print();
	friend std::ostream& operator<<(std::ostream& os, const LinkedList& instance);


};

