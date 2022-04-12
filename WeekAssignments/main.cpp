#include <iostream>
#include "String.h"

int main()
{
	//String empty;	�⺻�����ڷ� �� ���ڿ��� ����� ���°�?
	String empty;
	std::cout << empty << std::endl;

	//String sized(10);	ũ�� ���� �����ڷ� �ش� ũ�⸸ŭ ����� ���°�?
	String sized(10);
	std::cout << sized.GetLength() << std::endl;

	//String s1("test");	���ڿ� ���ͷ��� ������ �Ǵ°�?
	String s1("test");
	std::cout << s1 << std::endl;

	//String s2(s1);	�ٸ� String ��ü�� ���� ������ �Ǵ°�?
	String s2(s1);
	std::cout << s2 << std::endl;


	//String s3 = s1 + s2;	+ �����ڰ� �����ΰ�?
	String s3 = s1 + s2;
	std::cout << s3 << std::endl;

	//s3 += s3;	+= �����ڰ� �����ΰ�?
	s3 += s3;
	std::cout << "s3 is [" << s3 << "]" << std::endl;


	//cout << s1[0] << s1[2] << s1[3] << s1[4] << s1[5];	[ ] �����ڰ� �����ΰ�? (��� ������)
	std::cout << s1[0] << s1[1] << s1[2] << s1[3] << s1[4] << std::endl;


	//�迭 ũ�Ⱑ �Ѿ�� �����Ѱ�? 
	// Catch assert

	//s3[0] = 'T';	[ ] �����ڸ� ���� ���� ������ �� �ִ°�?
	s3[0] = 'T';
	std::cout << s3 << std::endl;
	std::cout << "after s3[0] = 'T'\ns3 is [" << s3 << "]" << std::endl;
	std::cout << "s3 length is [" << s3.GetLength() << "]" << std::endl;

	//empty = s3;	= �����ڴ� �����ΰ�?
	empty = s3;
	std::cout << "after empty = s3\nempty is [" << empty << "]" << std::endl;

	//empty = empty;	������ ��ü�� �����Ϸ��� �õ��ϸ� ��� �Ǵ°�?
	empty = empty;
	std::cout << "after empty = empty\nempty is [" << empty << "]" << std::endl;

}
