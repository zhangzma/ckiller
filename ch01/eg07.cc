#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	int lower, upper;
	// if (v1 < v2)
	// {
		lower = v1;
		upper = v2;
	// }
	// else
	// {
	// 	lower = v2;
	// 	upper = v1;
	// }

	int sum = 0;
	for (int i = lower; i <= upper; ++i)
	{
		sum += i;
	}

	std::cout << "Sum of " << lower
			  << " to " << upper
			  << " inclusive is "
			  << sum << std::endl;
	
    return 0;
}
