// calcurratlor.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int add(int x, int y)
{

	return x + y;


}
int sub(int y, int z)
{


	return y - z;

}
int mul(int y, int z)
{


	return y *z;

}

int ision(int g, int z)
{


	return g / z;

}
int _tmain(int argc, _TCHAR* argv[])
{
	int result;

	std::cout << "Hello world" << std::endl;
	//return 0;

	result = add(11, 11);
	std::cout << "add=" << result << std::endl;

	result = sub(11, 11);
	std::cout << "sub=" << result << std::endl;

	result = mul(11, 11);
	std::cout << "mul=" << result << std::endl;

	result = ision(11, 11);
	std::cout << "ision=" << result << std::endl;

}

