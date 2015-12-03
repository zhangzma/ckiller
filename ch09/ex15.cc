// ex15.cc
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
    list<string> strLst;
    string tmp;
    std::cout << "Input the strings: " << std::endl;
    while (cin >> tmp) {
        strLst.push_back(tmp);
    }

    list<string>::iterator it = strLst.begin();
    while (it != strLst.end()) {
        std::cout << *it++ << std::endl;
    }    
    return 0;
}

