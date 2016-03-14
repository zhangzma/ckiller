// ex12.cc
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
bool cantain_value(T beg, T end, int val)
{
    bool has_flag = false;
    while (beg != end) {
        if (*beg == val) {
            has_flag = true;
            break;
        }
        beg++;
    }

    return has_flag;
}

int main(int argc, char *argv[])
{
    vector<int> ivec;
    for (int i = 0; i < 10; i++) {
        ivec.push_back(i);
    }

    bool has_flag = cantain_value(ivec.begin(), ivec.end(), 4);
    string info = has_flag ? "find it." : "Not find it."; 
    std::cout << info << std::endl;

    return 0;
}


