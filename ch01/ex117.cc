// ��ϰ��1.17��
// ��д����Ҫ���û�����һ������
// �����Ϣ˵�������ж��ٸ�������
#include <iostream>

int main(int argc, char *argv[])
{
    int amount(0), value;
	while (std::cin >> value)	// ��ȡ�û����룬ֱ���ļ�������
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
