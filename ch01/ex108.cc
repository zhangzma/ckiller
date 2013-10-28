#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "/* can "*/"not nest */" << std::endl;
    return 0;
}
