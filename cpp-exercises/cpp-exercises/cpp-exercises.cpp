// cpp-exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int sum(int x, int y);
int product(int x, int y);

int main()
{
	std::cout << "Sum: " << sum(3, 4) << std::endl;
	std::cout << "Product: " << product(3, 4) << std::endl;
	return 0;
}