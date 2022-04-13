#pragma once
class Animal
{
protected:
	int mAge;
	int mWeight;
public:
	Animal();
	virtual ~Animal();

	int GetAge() const;
	void SetAge(const int age);
	int GetWeight() const;
	void SetWeight(const int weight);

	virtual void Sound();
	virtual Animal* Clone()
	{
		return nullptr;
	}
};

