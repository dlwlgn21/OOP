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
	CPU mCPU;				// is-part-of : 멤버 변수화
	GraphicCard mGPU;		// is-part-of : 멤버 변수화
	Keyboard* mKeyboard;	// has-a : 멤버 포인터 변수화
	
	//User* mpUser;			// use-a : 멤버 포인터 변수화
	
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
	gram->mKeyboard = &logitech;	// has-a : 멤버 포인터 변수화
	macbook->mKeyboard = &logitech;	// has-a : 멤버 포인터 변수화
	omen->mKeyboard = &logitech;	// has-a : 멤버 포인터 변수화
	*/
}