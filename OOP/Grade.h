#pragma once
#include "Student.h"

enum 
{
	MAX_STUDENT_COUNT = 10
};
class Grade
{
	unsigned int mGrade;
	unsigned int mClass;
	const Student* mStudents;

private:
	void SetStudent(const Student students[]);

public:
	Grade(const unsigned int grade, const unsigned int Class, const Student students[]);

	unsigned int GetGrade() const;
	unsigned int GetClass() const;
	
	void SetGrade(const unsigned int grade);
	void SetClass(const unsigned int Class);

	void PrintAllStudents(unsigned int studentCount) const;
	void PrintStudentsSumScore(unsigned int studentCount) const;
};

