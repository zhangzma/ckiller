#include <iostream>
#include <string>
using std::string;

int string2int(std::string str)
{
	int result(0);
	if (str.length())
	{
		result = str[0] - '0';
	}
	return result;
}

int main(int argc, char *argv[])
{
	string s1, s2;
	if (argc >= 3)
	{
		// std::cout << argv[1] + argv[2] << std::endl;
		s1 = argv[1];
		s2 = argv[2];
		std::cout << string2int(s1) + string2int(s2) << std::endl;
	}
	else
	{
		std::cout << "The paramters of MAIN is two integers.!" << std::endl;
	}

    return 0;
}
