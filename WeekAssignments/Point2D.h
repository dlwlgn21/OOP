#pragma once
#include <iostream>
class Point2D
{
private:
	int mX;
	int mY;
public:
	Point2D(int x, int y);
	void Print() const;

	/* 일반함수 버전
	friend Point2D operator+(const Point2D& pt1, const Point2D& pt2)
	{
		Point2D result{ 0,0 };
		result.mX = pt1.mX + pt2.mX;
		result.mY = pt1.mY + pt2.mY;
		return result;
	}
	*/
	// member function
	Point2D operator+(const Point2D& rhs)
	{
		Point2D result{ 0, 0 };
		result.mX = this->mX + rhs.mX;
		result.mY= this->mY + rhs.mY;
		return result;
	}

	const Point2D& operator++()
	{
		++mX;
		++mY;
		return *this;
	}

	const Point2D& operator++(int value)
	{
		Point2D temp(mX, mY);
		++(*this);
		return temp;
	}
	operator const float()
	{
		return sqrt(mX * mX + mY * mY);
	}
	void operator() ()
	{
		mX = 0;
		mY = 0;
	}
	friend std::ostream& operator << (std::ostream& os, const Point2D& pt);

};
