// file "ex6-24.cc"
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
    bitset<70> bitvec;
	unsigned long valul;

	// set the 'bitvec' with random
	for (size_t i = 0; i < bitvec.size(); ++i)
	{
		if (rand()%2)
			bitvec.set(i);
		else
			bitvec.reset(i);
	}

	cout << bitvec << endl;
	try {
		valul = bitvec.to_ulong();
	}
	catch (overflow_error &err)
	{
		std::cout << err.what() << std::endl;
	}

	std::cout << "val ul = " << valul << std::endl;
    return 0;
}
