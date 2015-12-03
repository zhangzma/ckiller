// Copyright (c) 2015 www.bjfz.com. All rights reserved.
// ex27.cc
#include <iostream>
#include <string>
#include <list>
#include <deque>
#include "common.h"


using std::string;
using std::list;
using std::deque;

template<typename T>
void find_and_erase_a_string(T &con, string val)
{
    typename T::iterator beg = con.begin();
    while (beg != con.end()) {
        if (*beg == val) {
            beg = con.erase(beg);
        }
        else {
            beg++;
        }
    }
}


int main(int argc, char *argv[])
{
    
    list<string> strlist;
    string tmp;

    std::cout << "Please input the strings: " << std::endl;
    while (std::cin >> tmp) {
        strlist.push_back(tmp);
    }
    std::cin.clear();

    std::cout << "Enter the string that you want to erase: " << std::endl;
    std::cin >> tmp;

    find_and_erase_a_string(strlist, tmp);
    std::cout << "strlist: " << std::endl;
    print(strlist);
    
    return 0;
}





