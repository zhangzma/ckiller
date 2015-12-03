// ex05-03.cc
#include <iostream>
using namespace std;


bool is_odd(int ival)
{
    return (ival % 2);
}

int main(int argc, char *argv[])
{
    int ival;
    while (cin >> ival)
    {
        if (is_odd(ival)) {
            std::cout << ival << "is odd." << std::endl;
        }
        else {
            std::cout << ival << "is even." << std::endl;
        }
    }
    
    return 0;
}

