#include <iostream>
#include "MyVector2D.h"
#include "Grade.h"

char** InitNames();

int main()
{
	MyVector2D vector2D{};
	vector2D.SetX(3);
	vector2D.SetY(3);
	vector2D.PrintCoordinate();
	std::cout << "distance from origin is " << vector2D.GetDistanceFromOrigin() << std::endl;

	char** names = InitNames();

	Student students[MAX_STUDENT_COUNT];
	for (int i = 0; i < MAX_STUDENT_COUNT; ++i)
	{
		students[i].SetName(names[i]);
		students[i].SetNumber(i + 1);
		students[i].SetScore(i + 1);
	}

	Grade grade(1, 1, students);
	grade.PrintAllStudents(MAX_STUDENT_COUNT);
	grade.PrintStudentsSumScore(MAX_STUDENT_COUNT);

 }
/* 
이거 위험하지 않을까요 ?? 이름 일일히 만들기 귀찮아서,
밑의 함수에서 이름을 만들어주고 포인터를 반환해줬는데...
각각의 문자배열이 지역변수로 만들어져서 스택에 잡히지 않나요?
함수에서 만든 문자배열들을 모아서 이중포인터로 반환해준게 문제가 있지 않을까 싶어서요. 
실행하면 잘 돌긴 하는데...
*/
char** InitNames()
{
	// 이름 생성
	char* names[MAX_STUDENT_COUNT]{};
	char student1[NAME_LENGTH] = "Akali";
	char student2[NAME_LENGTH] = "Teemo";
	char student3[NAME_LENGTH] = "Lee sin";
	char student4[NAME_LENGTH] = "Graves";
	char student5[NAME_LENGTH] = "Ash";
	char student6[NAME_LENGTH] = "Queen";
	char student7[NAME_LENGTH] = "Zed";
	char student8[NAME_LENGTH] = "Shen";
	char student9[NAME_LENGTH] = "Moondo";
	char student10[NAME_LENGTH] = "Dyrius";
	names[0] = student1;
	names[1] = student2;
	names[2] = student3;
	names[3] = student4;
	names[4] = student5;
	names[5] = student6;
	names[6] = student7;
	names[7] = student8;
	names[8] = student9;
	names[9] = student10;
	return names;
}
