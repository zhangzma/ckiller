// file "ex1-10_2.cc"
// 50 to 100 while
#include <iostream>

int main(int argc, char *argv[])
{
	int sum = 0, val = 50;
	while (val <= 100)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 inclusive is "
			  << sum << std::endl;
    return 0;
}
