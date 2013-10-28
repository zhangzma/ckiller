// 【习题1.17】
// 编写程序，要求用户输入一组数，
// 输出信息说明其中有多少个负数。
#include <iostream>

int main(int argc, char *argv[])
{
    int amount(0), value;
	while (std::cin >> value)	// 读取用户输入，直到文件结束符
	{
		if (value < 0)
		{
			amount++;
		}
	}

	std::cout << "Amount of all, negative valuess read is "
			  << amount << std::endl;
    return 0;
}
