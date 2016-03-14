// Copyright (c) 2015 www.bjfz.com. All rights reserved.
// ex34.cc

#include <iostream>
#include <string>

using std::string;

char to_upper(char ch)
{
    // 8, 4, 2, 1 
    if (ch >= 'a' && ch <= 'z') {
        return (ch & 0xDF);
    } else {
        return ch;
    }    
}

int main(int argc, char *argv[])
{
    string str;
    std::cout << "Please input the string: " << std::endl;
    std::cin >> str;

    string::iterator beg = str.begin();

    while (beg != str.end()) {
        *beg = to_upper(*beg);
        beg++;
    }

    std::cout << str << std::endl;
    return 0;
}
