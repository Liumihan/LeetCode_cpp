//
// Created by liumihan on 19-3-5.
//

#include "BinFind.h"

int BinFind::find(const int *nums, int length, int val) {
    int low = 0;
    int high = length - 1;
    while(low <= high){
        int mid = (high + low) >> 1;
        int mid_val = nums[mid];
        if(mid_val == val)
            return mid;
        else if(val > mid_val){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}