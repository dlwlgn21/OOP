#include <iostream>
#include <cmath>
#include "MyVector2D.h"

float MyVector2D::GetX() const
{
	return mX;
}
float MyVector2D::GetY() const
{
	return mY;
}

void MyVector2D::SetX(const float x)
{
	mX = x;
}
void MyVector2D::SetY(const float y)
{
	mY = y;
}

float MyVector2D::GetDistanceFromOrigin() const
{
	return (float)sqrt((mX * mX) + (mY * mY));
}
void MyVector2D::PrintCoordinate() const
{
	std::cout << "(" << mX << ", " << mY << ")" << std::endl;
}
