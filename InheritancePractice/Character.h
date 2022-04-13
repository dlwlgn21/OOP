#pragma once
class Character
{
protected:
	int mHp;
public:
	Character();
	virtual ~Character();
	virtual void Attack() const;
};

