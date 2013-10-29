// file "ex6-23.cc"
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <bitset>

int main(int argc, char *argv[])
{
	std::bitset<70> bitvec;
	unsigned long valul;

	// set the 'bitvec' with random
	for (size_t i = 0; i < bitvec.size(); ++i)
	{
		if (rand()%2)
			bitvec.set(i);
		else
			bitvec.reset(i);
	}

	valul = bitvec.to_ulong();

	std::cout << "val ul = " << valul << std::endl;
    return 0;
}
