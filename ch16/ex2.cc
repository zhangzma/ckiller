// file ex2.cc
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

//
template <typename T1, typename T2>
T1& print(T1& out, T2 val)
{
	out << val << std::endl;;
	return out;
}

int main(int argc, char *argv[])
{
    char cval = 'a';
	int ival = 10;
	double dval = 10.1;
	std::string sval = "hello world";

	print(std::cout, cval);
	print(std::cout, ival);
	print(std::cout, dval);
	print(std::cout, sval);

	// ofstream
	std::ofstream outfile("dat");
	print(outfile, cval);
	print(outfile, ival);
	print(outfile, dval);
	print(outfile, sval);

	// stringstream
	std::stringstream outstr;
	print(outstr, cval);
	print(outstr, ival);
	print(outstr, dval);
	print(outstr, sval);

	std::cout << outstr.str() << std::endl;	
	
    return 0;
}
