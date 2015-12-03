// ex24.cc
#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

ifstream &open_file(ifstream &in, const string fn)
{
    in.close();
    in.clear();
    in.open(fn.c_str());
    
    return in;
}

void close_file(ifstream &in)
{
    in.close();
    in.clear();
}

int main(int argc, char *argv[])
{
    set<string> excluded;
    if (argc < 2) {
        std::cout << "Usage: ex24 excludedFile." << std::endl;
        return -1;
    }

    ifstream in;
    if (!open_file(in, argv[1])) {
        std::cout << "The excluded file does not exist." << std::endl;
        return -1;
    }

    string excluded_word, word;
    while (in >> excluded_word) {
        excluded.insert(excluded_word);
    }

    std::cout << "Input the plural word: " << std::endl;
    std::cin >> word;
    if (excluded.count(word)) {
        std::cout << word << std::endl;
    }
    else {
        word.erase(word.end()-1);
        std::cout << word << std::endl;
    }

    return 0;
}

