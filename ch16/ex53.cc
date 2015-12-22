// ex53.cc

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
    const int N = 100;
    int i;
    vector<double> dvec;
    for (i = 0; i < N; i++) {
        double dval = rand() / 100.0;
        dvec.push_back(dval);
    }

    vector<int>    ivec;
    for (i = 0; i < N; i++) {
        int ival = rand() % 50;
        ivec.push_back(ival);
    }

    vector<char>   cvec;
    for (i = 0; i < N; i++) {
        char cval = 'a' + rand() % 26;
        cvec.push_back(cval);
    }

    size_t dcnt = count(dvec, 100.00);
    size_t icnt = count(ivec, 30);
    size_t ccnt = count(cvec, 'd');

    std::cout << "dcnt = " << dcnt << endl
              << "icnt = " << icnt << endl
              << "ccnt = " << ccnt << std::endl;

    // vector<string> strvec;
    return 0;
}

