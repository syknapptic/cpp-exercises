// cpp-exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int sum(int x, int y);
int product(int x, int y);
int compute_height();
float *circumference_area();

int main() {
	std::cout << "sum_product - Sum: " << sum(3, 4) << std::endl;
	std::cout << "sum_product - Product: " << product(3, 4) << std::endl;
	std::cout << "compute_height - compute_height(): " << compute_height() << " inches" << std::endl;
	std::cout << std::endl;

	float *circumference_area_array = circumference_area();
	std::cout << "circle_circumference_area - Circumference: " << *(circumference_area_array + 0) << " inches" << std::endl;
	std::cout << "circle_circumference_area - Area: " << *(circumference_area_array + 1) << " inches" << std::endl;
	std::cout << std::endl;

	return 0;
}