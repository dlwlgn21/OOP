#pragma once
enum {
	NAME_LENGTH = 32
};
class Student
{
	char mName[NAME_LENGTH];
	unsigned int mNumber;
	unsigned int mScore;

public:
	Student();
	Student(const char* name, const unsigned int number, const unsigned int score);

	char* GetName() const;
	unsigned int GetNumber() const;
	unsigned int GetScore() const;

	void SetName(const char* name);
	void SetNumber(const unsigned int number);
	void SetScore(const unsigned int score);
};