#include <iostream>
#include "Grade.h"

Grade::Grade(const unsigned int grade, const unsigned int Class, const Student students[])
{
	SetGrade(grade);
	SetClass(Class);
	SetStudent(students);
}
unsigned int Grade::GetGrade() const
{
	return mGrade;
}
unsigned int Grade::GetClass() const
{
	return mClass;
}

void Grade::SetGrade(const unsigned int grade)
{
	mGrade = grade;
}
void Grade::SetClass(const unsigned int Class)
{
	mClass = Class;
}
void Grade::SetStudent(const Student students[])
{
	mStudents = students;
}
void Grade::PrintAllStudents(unsigned int studentCount) const
{
	std::cout << "Grade: " << mGrade << " Class : " << mClass << " Student info" << std::endl;
	for (int i = 0; i < studentCount; ++i)
	{
		std::cout <<  "Name: " << mStudents[i].GetName() << std::endl;
		std::cout << "Number: " << mStudents[i].GetNumber() << std::endl;
		std::cout << "Score: " << mStudents[i].GetScore() << std::endl;
	}
}
void Grade::PrintStudentsSumScore(unsigned int studentCount) const
{
	unsigned int score{};
	for (int i = 0; i < studentCount; ++i)
	{
		score += mStudents[i].GetScore();
	}

	std::cout << "Grade: " << mGrade << " Class : " << mClass << " Student Sum Score: " << score << std::endl;

}