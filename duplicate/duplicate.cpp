//
// Created by liumihan on 19-3-3.
//

#include "duplicate.h"

bool Duplicate::duplicate(int *numbers, int length, int *duplicate) {
    if(numbers == nullptr || length <= 0){
        return false;
    }

    for(int i = 0; i < length; ++i){
        if(numbers[i] < 0 || numbers[i] > length-1){
            return false;
        }
    }

    for(int i = 0; i < length; ++i){
        while(numbers[i] != i){
            if(numbers[i] = numbers[numbers[i]]){
                *duplicate = numbers[i];
                return true;
            }
            //swap numbers[i] and numbers[numbers[i]]
            int temp = numbers[i];
            numbers[i] = numbers[temp];
            numbers[temp] = temp;
        }
    }
    return false;
}