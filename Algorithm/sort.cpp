//
// Created by liumihan on 19-3-6.
//

#include "sort.h"

void Sort::bubbleSort(std::vector<int> &v) {
    int len = v.size();
    for(int i = 1; i < len; ++i){
        for(int j = len - 1; j >= i; --j){
            if(v[j] < v[j - 1]){
                int temp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = temp;
            }
        }
    }
}

void Sort::selectSort(std::vector<int> &v) {
    int min_pos = 0;
    int len = v.size();
    for(int i = 1; i < len; ++i){
        for(int j = i; j < len; ++j){
            if(v[i] < v[min_pos]){
                int temp = v[i];
                v[i]
            }
        }

    }
}