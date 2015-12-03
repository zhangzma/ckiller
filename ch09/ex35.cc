// Copyright (c) 2015 www.bjfz.com. All rights reserved.
// ex35.cc
#include <iostream>
#include <string>

using namespace std;

bool is_upper(char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}

int main(int argc, char *argv[])
{
    string str;
    std::cout << "Please input the string." << std::endl;
    std::cin >> str;

    string::iterator beg = str.begin();
    while (beg != str.end()) {
        if (is_upper(*beg)) {
            beg = str.erase(beg);
        }
        else {
            beg++;
        }
    }

    std::cout << str << std::endl;
    
    return 0;
}



