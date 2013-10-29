// file "ex1-10.cc"

#include <iostream>

int main(int argc, char *argv[])
{
    int sum = 0;
	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << "FOR: Sum of 50 to 100 inclusive is "
			  << sum << std::endl;

	sum = 0;
	int i = 50;
	while (i <= 100)
	{
		sum += i++;
	}
	std::cout << "WHILE: Sum of 50 to 100 inclusive is "
			  << sum << std::endl;
	
    return 0;
}
