// 习题1.21
// 编写程序，循环遍历一组书的销售交易，读入每笔交易
// 并将交易写到标准输出。
#include <iostream>
#include "sales_item.h"

int main(int argc, char *argv[])
{
    CSalesItem book;
	std::cout << "Enter transaction: " << std::endl;

	while (std::cin >> book)
	{
		std::cout << "ISBN, numbers of copies sold, total revenue, and average price are:"
				  << std::endl;
		std::cout << book << std::endl;
	}
	
    return 0;
}
