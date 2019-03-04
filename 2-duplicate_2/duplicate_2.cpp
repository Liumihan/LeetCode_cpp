//
// Created by liumihan on 19-3-4.
//

#include "duplicate_2.h"

int Duplicate_2::getDuplication(int *nums, int length) {
    if(nums == nullptr || length == 0)
        return -1;

    int start = 1;
    int end = length - 1;
    while(end >= start){
        int middle = ((end - start) >> 1) + start;
        int count = countRange(nums, length, start, middle);
        if(end == start){
            if(count > 1)
                return start;
            else
                break;
        }
        if(count > (middle - start + 1))
            end = middle;
        else
            start = middle + 1;
    }
    return -1;
}

int Duplicate_2::countRange(const int *numbers, int length, int start, int end) {
    if(numbers == nullptr)
        return 0;

    int count = 0;
    for(int i = 0; i < length; ++i){
        if(numbers[i] >= start && numbers[i] <= end)
            ++count;
    }
    return count;
}