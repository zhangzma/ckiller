// ex29.cc
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> ivec;
    int N;
    std::cin >> N;
    for (int i=0; i<N; i++) {
        ivec.push_back(i);
        std::cout << "ivec: size: " << ivec.size()
                  << " capacity:  " << ivec.capacity() << std::endl;
    }

    return 0;
}

