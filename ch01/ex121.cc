// ϰ��1.21
// ��д����ѭ������һ��������۽��ף�����ÿ�ʽ���
// ��������д����׼�����
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
