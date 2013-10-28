#include <iostream>

int abs(int val1)
{
	return (val1 > 0) ? val1 : -val1;
}

int main(int argc, char *argv[])
{
	int i;

	std::cout << "Please input one integer: ";
	std::cin >> i;
	std::cout << "i = " << i << ", abs(i) = " <<abs(i) << std::endl;
    return 0;
}
