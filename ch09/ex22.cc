// ex22.cc
#include <iostream>
#include <vector>
#include "common.h"
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> ivec;
    for (int i=0; i<25; i++) {
        ivec.push_back(i);
    }

    std::cout << "\nivec: " << std::endl;
    std::cout << "ivec.size() = " << ivec.size() << std::endl;
    print(ivec);

    ivec.resize(100);
    std::cout << "\nivec: " << std::endl;
    std::cout << "ivec.size() = " << ivec.size() << std::endl;
    print(ivec);
    
    ivec.resize(10);
    std::cout << "\nivec: " << std::endl;
    std::cout << "ivec.size() = " << ivec.size() << std::endl;
    print(ivec);
    
    return 0;
}
