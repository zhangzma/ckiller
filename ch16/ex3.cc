// file ex3.cc
#include <iostream>

// define compare()
template <typename T>
int compare(T v1, T v2)
{
	if (v1 < v2)
		return -1;

    if (v2 < v1)
		return 1;
    
    return 0;
}

int main(int argc, char *argv[])
{
	std::cout << compare("hi", "world") << std::endl;
    return 0;
}
