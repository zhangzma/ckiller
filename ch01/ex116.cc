#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Enter to numbers: " << std::endl;
	int v1, v2, max;
	std::cin >> v1 >> v2;
	if (v1 >= v2)
	{
		max = v1;
	}
	else
	{
		max = v2;
	}

	std::cout << "The max of two numbers is " << max << std::endl;
    return 0;
}
