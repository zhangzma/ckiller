// 7-20.cc
// µü´úÊ½factorialº¯Êý
#include <iostream>
using namespace std;

int factorial(int val)
{
	int result = 1;
	for (int i = 1; i <= val; ++i)
	{
		result *= i;
	}
	return result;
}

int main(int argc, char *argv[])
{
	int val = 10;

	cout << "factorial(10) = " << factorial(val) << endl;
    
    return 0;
}
