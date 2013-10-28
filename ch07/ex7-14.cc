#include <iostream>
#include <vector>
using namespace std;

typedef vector<double> DBLV;
typedef vector<double>::iterator dit;

// 使用迭代器求double型容器的和
double sum_double(vector<double>::iterator beg,
				  vector<double>::iterator end)
{
	double sum = 0.0;
	while (beg != end)
	{
		sum += *beg++;
	}
	return sum;
}

int main(int argc, char *argv[])
{
	vector<double> dvec;
	dvec.push_back(1.3);
	dvec.push_back(1.2);
	dvec.push_back(1.3);
	dvec.push_back(1.3);

	cout << "sum_d = " << sum_double(dvec.begin(), dvec.end()) << endl;

    return 0;
}
