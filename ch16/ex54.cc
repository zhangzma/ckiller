// ex54.cc
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

template<>
size_t count(const vector<string> &tvec, const string &val)
{
    size_t count = 0;
    

    
    return count;
}


