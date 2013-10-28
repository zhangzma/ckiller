// 习题1.18
// 编写程序，提示用户输入两个数并将这两个数范围内的每一个数写到标准输出。
#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	
	int lower, upper;
	if (v1 >= v2)
	{
		upper = v1;
		lower = v2;
	}
	else
	{

		upper = v2;
		lower = v1;
	}

	std::cout << "All numbers in " << lower
			  << " between " << upper
			  << " are: " << std::endl;
	for (int i=lower; i < upper; ++i)
	{
		std::cout << i << "  ";
	}
	std::cout << "\n";
    return 0;
}
