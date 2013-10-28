// file "ex01.cc"

#include <iostream>
#include <string>
#include <vector>
#include <list>

int main(int argc, char *argv[])
{
	int ia[7] = { 0, 1, 1, 2, 3, 5, 8 };
	std::string sa[6] = {
		"Fort Sumter", "Manassas", "Perryville",
		"Vicksburg", "Meridian", "Chancellorsville"};
	// std::vector<std::string> svec(sa, sa+6);
	std::list<int> ilist(ia+4, ia+6);
	std::vector<int> ivec(ia, ia+8);
	// std::list<std::string> slist(sa+6, sa);
	
    return 0;
}

