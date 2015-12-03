// Copyright (c) 2015 www.bjfz.com. All rights reserved.
// ex14.cc
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * Print the container
 * @param beg -- iterator beg
 * @param end -- iterator end
 */
template<typename T>
void print_container(T beg, T end)
{
    while (beg != end) {
        std::cout << *beg++ << " ";
    }
}

int main(int argc, char *argv[])
{
    vector<string> strVec;
    string tmp;
    std::cout << "Input the strings: " << std::endl;
    while (cin >> tmp) {
        strVec.push_back(tmp);
    }

    vector<string>::iterator it = strVec.begin();
    while (it != strVec.end()) {
        std::cout << *it++ << std::endl;
    }
    
    return 0;
}

