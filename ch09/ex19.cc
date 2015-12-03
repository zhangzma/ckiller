
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    // vector<int>::iterator mid = iv.begin() + iv.size()/2;
    vector<int>::iterator iter = iv.begin();
    while (iter != (iv.begin() + iv.size()/2)) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val);
            iter++;
        }
        iter++;
    }

    
    return 0;
}

