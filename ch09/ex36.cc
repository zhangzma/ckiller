// ex36.cc
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<char> cvec(5, 'c');
    string str(cvec.begin(), cvec.end());

    std::cout << str << std::endl;
    return 0;
}
