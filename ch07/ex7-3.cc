#include <iostream>

// 
long double my_power(int x, int n)
{
	long double power = 1;
	while (n--)
	{
		power *= x;
	}

	return power;
}

int main(int argc, char *argv[])
{
	int x, n;
	std::cout << "Please input two integer: " << std::endl;
	std::cin >> x >> n;
	std::cout << "power(x, n) = " << my_power(x, n) << std::endl;
    return 0;
}
