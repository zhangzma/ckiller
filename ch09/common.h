// common.h

#ifndef _COMMON_H_
#define _COMMON_H_

template<typename T>
void print(T beg, T end)
{
    while (beg != end) {
        std::cout << *beg++ << " ";
    }
}

template<typename T>
void print(const T &con)
{
    typename T::const_iterator it = con.begin();
    while (it != con.end()) {
        std::cout << *it++ << " ";
    }
}
#endif /* _COMMON_H_ */
