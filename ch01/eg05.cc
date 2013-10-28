#include <iostream>

int main(int argc, char *argv[])
{
    int sum = 0, val = 1;
	while (val <= 10)
	{
		sum += val;
		val++;
	}

	std::cout << " Sum of 1 + 2 +...+ 10 = "
			  << sum << std::endl;
    return 0;
}
