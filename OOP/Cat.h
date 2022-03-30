#pragma once

class Cat
{
private:
	int mAge;

public:
	void Meow() const;

	int GetAge() const; // instance의 내용이 바뀌지 않는다.
	void SetAge(int age); 
};

