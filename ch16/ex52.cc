// ex52.cc

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

template<typename T>
size_t count(const vector<T> &tvec, const T &val)
{
    size_t count = 0;
    typename vector<T>::const_iterator it = tvec.begin();
    while (it != tvec.end()) {
        if (*it == val) {
            count++;
        }

        it++;
    }
    
    return count;
}

int main(int argc, char *argv[])
{
    vector<int> ivec;
    const int NUM = 100;
    for (int i = 0; i < NUM; i++) {
        ivec.push_back(rand() % 50);
    }

    size_t cnt = count(ivec, 44);

    std::cout << "In the ivec, contains " << cnt << " 12." << std::endl;
    for (int i = 0; i < NUM; i++) {
        std::cout << ivec[i] << std::endl;
    }


    return 0;
}

