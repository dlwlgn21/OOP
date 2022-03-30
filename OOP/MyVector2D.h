#pragma once

class MyVector2D 
{
	float mX;
	float mY;

public:
	float GetX() const;
	float GetY() const;
	
	void SetX(const float x);
	void SetY(const float y);

	float GetDistanceFromOrigin() const;
	void PrintCoordinate() const;
};