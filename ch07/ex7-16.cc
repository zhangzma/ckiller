// 7-16.cc
// ����������ѡ���������ݸ�main��ʵ�ε�ֵ
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    cout << "Output the parameters of main:" << endl;
	for (int i = 0; i < argc; ++i)
	{
		cout << argv[i] << '\t';
	}
	
    return 0;
}
