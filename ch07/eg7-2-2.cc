#include <iostream>
using namespace std;

void swap_err(int v1, int v2)
{
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
}

void swap_ref(int &v1, int &v2)
{
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
}

int main(int argc, char *argv[])
{
	int i = 10;
	int j = 20;
	// Call swap_err
	cout << "Before swap_err():\ti: "
		 << i << "\tj: " << j << endl;
	swap_err(i, j);
	cout << "After swap_err():\ti: "
		 << i << "\tj: " << j << endl;

	// Call swap_ref
	cout << "Before swap_ref():\ti: "
		 << i << "\tj: " << j << endl;
	swap_ref(i, j);
	cout << "After swap_ref():\ti: "
		 << i << "\tj: " << j << endl;
    return 0;
}
