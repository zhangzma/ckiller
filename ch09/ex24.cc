// ex24.cc
#include <iostream>
#include <vector>
using std::vector;

int main(int argc, char *argv[])
{
    vector<int> ivec;

    ivec.push_back(1);
    ivec.clear();

    if (ivec.empty()) {
        std::cout << "No element!" << std::endl;
    }
    else {
        // vec.at(n);
        std::cout << ivec.at(0) << std::endl;
        // vec.front();
        std::cout << ivec.front() << std::endl;
        // vec.begin();
        std::cout << *(ivec.begin()) << std::endl;
    }

    return 0;
}

