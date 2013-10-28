#include <iostream>

// return the bigger of two interge
int max_value(int v1, const int *pv2)
{
	return (v1 > *pv2) ? v1 : *pv2;
}

int main(int argc, char *argv[])
{
	int i, j;
	int *pj = &j;

	std::cout << "Please input two integer:" << std::endl;
	std::cin >> i >> j;
	std::cout << "The max of (i, *pj) is :" << max_value(i, pj) << std::endl;
    
    return 0;
}
