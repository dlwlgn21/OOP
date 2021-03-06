#pragma once
enum Command
{
	ADD = 1,
	DELETE = 2,
	EXIT = 3
};
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
	virtual int Delete() = 0;
	virtual void PrintInfo() = 0;
	virtual void ProcessUserInput(LinkedList& list) = 0;
	int GetValue(const int value);
	void Print();
	friend std::ostream& operator<<(std::ostream& os, const LinkedList& instance);


};

