#include <iostream>
#if 0
class CPU
{

};
class GraphicCard
{

};
class Keyboard
{

};
class NoteBook
{
public:
	CPU mCPU;				// is-part-of : ��� ����ȭ
	GraphicCard mGPU;		// is-part-of : ��� ����ȭ
	Keyboard* mKeyboard;	// has-a : ��� ������ ����ȭ
	
	//User* mpUser;			// use-a : ��� ������ ����ȭ
	
};
#endif
class GameDeveloper
{
public:
	std::string mName;
	int mAge;

};
class Programmer : public GameDeveloper
{
public:
	void Coding();
	void Debugging();
};

class Designer : public GameDeveloper
{
public:
	void Documentation();
	void Presentation();
};

class ChiefProgrammer : public Programmer
{
public:
	void Architecture();
	void Scheduling();
};
class ChiefDisigner : public Designer
{
public:
	void Meeting();
	void Scheduling();

};

int main()
{
	/*
	NoteBook gram, macbook, omen;
	Keyboard logitech;
	gram->mKeyboard = &logitech;	// has-a : ��� ������ ����ȭ
	macbook->mKeyboard = &logitech;	// has-a : ��� ������ ����ȭ
	omen->mKeyboard = &logitech;	// has-a : ��� ������ ����ȭ
	*/
}