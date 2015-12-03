// ex26.cc
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{
    multimap<string, string> authors;
    authors.insert(make_pair(
                       string("Barth, John"),
                       string("Sot-Weed Factor")));
    authors.insert(make_pair(
                       string("Barth, John"),
                       string("Lost in the Funhouse")));
    authors.insert(make_pair(
                       string("Tim"),
                       string("Arm & Linux")));
    std::cout << authors.size() << std::endl;

    string author;
    std::cout << "Please input the author's name: " << std::endl;
    std::cin >> author;
    
    // typedef multimap<string, string>::size_type sz_type;
    // sz_type entries = authors.count(author);
    multimap<string, string>::iterator it = authors.find(author);
    if (it != authors.end()) {
        authors.erase(author);
    }

    // authors.erase(it, it+entries);

    std::cout << authors.size() << std::endl;
    
    return 0;
}


