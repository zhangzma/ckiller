// ϰ��1.19
// ��д������ʾ�û�������������������������Χ�ڵ�ÿһ����д����׼�����
// �޸ĳ���ʹÿ�����������10����
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
