#include <iostream>

void swap(int *pv1, int *pv2)
{
	int tmp = *pv2;
	*pv2 = *pv1;
	*pv1 = tmp;
}

int main(int argc, char *argv[])
{
	int v1, v2;
	std::cout << "Please input two integer to swap: ";
	std::cin >> v1 >> v2;
	std::cout << "v1, v2 = " << v1 << "\t" << v2 << std::endl;
	swap(&v1, &v2);
	std::cout << "v1, v2 = " << v1 << "\t" << v2 << std::endl;
    return 0;
}
