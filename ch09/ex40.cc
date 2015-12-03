// Copyright (c) 2015 www.bjfz.com. All rights reserved.
// ex40.cc

#include <iostream>
#include <string>
using std::string;

string assapp(string q1, string q2);

int main(int argc, char *argv[])
{
    string q1("When lilacs last in the dooryard bloom'd");
    string q2("The child is father of the man");

    string sentence = assapp(q1, q2);
    
    std::cout << sentence << std::endl;
    
    return 0;
}

string assapp(string q1, string q2)
{
    string sentence;
    sentence.assign(q2.begin(), q2.begin()+13);
    sentence.append(q1.substr(q1.find("in"), 15));
    return q1;
}

