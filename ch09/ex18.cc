// ex18.cc
#include <iostream>
#include <list>
#include <deque>

using namespace std;

template<typename T>
void print(T beg, T end)
{
    while (beg != end) {
        std::cout << *beg++ << " ";
    }
}

int main(int argc, char *argv[])
{
    list<int> ilst;
    deque<int> odd_deq, eve_deq;
    for (int i=0; i<10; i++) {
        ilst.push_back(i);
    }

    std::cout << "ilst: ";
    print(ilst.begin(), ilst.end());
    list<int>::iterator it = ilst.begin();
    while (it != ilst.end()) {
        if (*it % 2 == 0) {
            eve_deq.push_back(*it);
        }
        else {
            odd_deq.push_back(*it);
        }

        it++;
    }
    
    std::cout << "\neve_deq: ";
    print(eve_deq.begin(), eve_deq.end());

    std::cout << "\nodd_deq: ";
    print(odd_deq.begin(), odd_deq.end());
    
    return 0;
}

