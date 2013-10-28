#include <iostream>
using namespace std;

int sum1(const int *beg, const int *end)
{
	int sum = 0;
	while (beg != end)
	{
		sum += *beg++;
	}
	return sum;
}

int sum2(const int *beg, size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; ++i)
	{
		sum += *beg++;
	}
	return sum;
}

int sum3(const int a[], size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; ++i)
	{
		sum += a[i];
	}
	return sum;
}

int main(int argc, char *argv[])
{
	const size_t size = 10;
    int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8};
	int *beg, *end;
	beg = a;
	end = a + size;
	cout << "sum1 = " << sum1(a, a+size) << endl;
	cout << "sum2 = " << sum2(beg, size) << endl;
	cout << "sum3 = " << sum3(a, size) << endl;
    return 0;
}
