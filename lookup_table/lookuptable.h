//
// Created by liumihan on 19-3-5.
//

#ifndef GETMYOFFER_LOOKUPTABLE_H
#define GETMYOFFER_LOOKUPTABLE_H


class LookUpTable {
public:
    LookUpTable(double (*func)(double));
public:
    double table[360] = {-1};
};


#endif //GETMYOFFER_LOOKUPTABLE_H
