// ex28.cc

#include <iostream>
#include <list>
#include <vector>
#include "common.h"
using namespace std;

int main(int argc, char *argv[])
{
    const char *sa[] = {"zhang", "sa", "argv", "argc", "main"};
    int count = sizeof(sa)/sizeof(sa[0]);

    list<const char*> slist(sa, sa+count);

    std::cout << "slist: " << std::endl;
    print(slist);

    vector<string> svec(slist.begin(), slist.end());
    std::cout << "\nsvec: " << std::endl;
    print(svec);    
    
    return 0;
}

