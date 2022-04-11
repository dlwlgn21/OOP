#pragma once
class Animal
{
protected:
	int mAge;
	int mWeight;
public:
	Animal();
	~Animal();

	int GetAge() const;
	void SetAge(const int age);
	int GetWeight() const;
	void SetWeight(const int weight);

	void Sound();
};

