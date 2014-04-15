// file "union-18-5.h"

#ifndef _UNION_18_5_H_
#define _UNION_18_5_H_

//
class CToken
{
public:
    enum {CHAR, INT, DBL};
    unionn
    {
        char   cval;
        int    iva;
        double dval;
    };
};

#endif /* _UNION-18-5_H_ */
