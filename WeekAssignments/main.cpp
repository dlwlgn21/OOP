#include <iostream>
#include "String.h"

int main()
{
	//String empty;	기본생성자로 빈 문자열이 만들어 지는가?
	String empty;
	std::cout << empty << std::endl;

	//String sized(10);	크기 지정 생성자로 해당 크기만큼 만들어 지는가?
	String sized(10);
	std::cout << sized.GetLength() << std::endl;

	//String s1("test");	문자열 리터럴로 생성이 되는가?
	String s1("test");
	std::cout << s1 << std::endl;

	//String s2(s1);	다른 String 객체로 복사 생성이 되는가?
	String s2(s1);
	std::cout << s2 << std::endl;


	//String s3 = s1 + s2;	+ 연산자가 정상인가?
	String s3 = s1 + s2;
	std::cout << s3 << std::endl;

	//s3 += s3;	+= 연산자가 정상인가?
	s3 += s3;
	std::cout << "s3 is [" << s3 << "]" << std::endl;


	//cout << s1[0] << s1[2] << s1[3] << s1[4] << s1[5];	[ ] 연산자가 정상인가? (상수 연산자)
	std::cout << s1[0] << s1[1] << s1[2] << s1[3] << s1[4] << std::endl;


	//배열 크기가 넘어가도 안전한가? 
	// Catch assert

	//s3[0] = 'T';	[ ] 연산자를 통해 값을 수정할 수 있는가?
	s3[0] = 'T';
	std::cout << s3 << std::endl;
	std::cout << "after s3[0] = 'T'\ns3 is [" << s3 << "]" << std::endl;
	std::cout << "s3 length is [" << s3.GetLength() << "]" << std::endl;

	//empty = s3;	= 연산자는 정상인가?
	empty = s3;
	std::cout << "after empty = s3\nempty is [" << empty << "]" << std::endl;

	//empty = empty;	동일한 객체를 배정하려고 시도하면 어떻게 되는가?
	empty = empty;
	std::cout << "after empty = empty\nempty is [" << empty << "]" << std::endl;

}
