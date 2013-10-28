// file ex1.cc

#include <iostream>

// define function -- abs
template <typename T>
T abs(T val)
{
	return (val < 0) ? -val : val;
}

int main(int argc, char *argv[])
{
	char val = -3;
	std::cout << abs(10) << std::endl;
	std::cout << abs(-10.3) << std::endl;
	std::cout << abs(val) << std::endl;
    return 0;
}
