// 习题1.19
// 编写程序，提示用户输入两个数并将这两个数范围内的每一个数写到标准输出。
// 修改程序，使每行输出不超过10个数
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
		if ((i-lower+1) % 10 == 0)
		{
			std::cout << std::endl;
		}
	}
	std::cout << "\n";
    return 0;
}
