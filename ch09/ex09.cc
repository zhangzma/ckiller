// ex09.cc
#include <iostream>
#include <list>
using namespace std;

typedef list<int>::iterator ilst_it;

void print_reverse(ilst_it beg, ilst_it end);



int main(int argc, char *argv[])
{
    list<int> ilst;
    for (int i = 0; i < 10; i++) {
        ilst.push_back(i);
    }

    print_reverse(ilst.begin(), ilst.end());
    return 0;
}

void print_reverse(ilst_it beg, ilst_it end)
{
    while (beg != end) {
        std::cout << *(--end) << "\t";
    }

    std::cout << std::endl;
}

