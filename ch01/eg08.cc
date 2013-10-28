// 例题08
// 读入未知数目的数，直到程序输入结束；
// 计算读入数据的总和，写到标准输出
#include <iostream>

int main(int argc, char *argv[])
{
    int sum = 0, val;

	while (std::cin >> val)
	{
		sum += val;
	}
	std::cout << "Sum is "
			  << sum << std::endl;
    return 0;
}
