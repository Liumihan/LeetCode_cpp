//
// Created by liumihan on 19-3-5.
//

#include "lookuptable.h"
#include "cmath"

LookUpTable::LookUpTable(double (*func)(double)) {
    for(int i = 0; i < 360; ++i){
        this->table[i] = func(i * 3.1415 / 180);
    }
}