#include "MyString.h"
#include "Point2D.h"
#include "MyArray.h"

std::ostream& operator << (std::ostream& os, const Point2D& pt)
{
	os << "(" << pt.mX << ", " << pt.mY << ")" << std::endl;
	return os;
}

int main()
{
	MyString myString("Gahahaha");
	myString.Print();

	Point2D pt1{ 2, 3 }, pt2{ 4, 5 };

	pt1.Print();
	pt2.Print();
	Point2D pt3 = pt1 + pt2;

	pt3.Print();

	Point2D pt4 = pt1 + pt2 + pt3; // 公疙按眉 积辫

	pt4.Print();

	Point2D pt5 = ++(pt1 + pt2); //公疙按眉 积辫.

	pt5.Print();
	pt1.Print();

	MyArray myArray;

	std::cout << myArray[1] << std::endl;
	myArray[1] = 5;
	std::cout << myArray[1] << std::endl;

	float distance = pt1;
	std::cout << distance << std::endl;
	std::cout << pt1;

}
