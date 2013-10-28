// 7-16.cc
// 接受命令行选项，并输出传递给main的实参的值
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
