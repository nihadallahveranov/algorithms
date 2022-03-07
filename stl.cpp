#include <iostream>
#include <typeinfo>

// Standard Template Library

/*	
 * For execute: Open Terminal and Following the commands
 * g++ -std=c++17 stl.cpp
 * ./a.out
 */

template <typename T>

T multiplication(T a, T b)
{
	return a * b;
}

int main()
{
	std::pair<int, double>pair1(5, 5.5);
	auto a = pair1.first;
	auto b = pair1.second;
	std::cout << "data type: " << typeid(multiplication(a, a)).name() << ", num: " << multiplication(a, a) << std::endl;
	std::cout << "data type: " << typeid(multiplication(b, b)).name() << ", num: "<<  multiplication(b, b) << std::endl;
}
