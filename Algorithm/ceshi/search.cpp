//
// Created by liumihan on 19-3-8.
//

#include "search.h"

int ceshi::Search::binSearch(std::vector<int> v, int target) {
    if(v.size() < 1)
        return -1;
    int low = 0;
    int high = v.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] == target)
            return mid;
        else if(target > v[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int ceshi::Search::insertSearch(std::vector<int> v, int target) {
    if(v.size() < 1)
        return -1;
    int low = 0;
    int high = v.size() - 1;
    while(low <= high){
        int mid = low + ((target - v[low]) / (v[high] - v[low])) * (high * low);
        if(v[mid] == target)
            return mid;
        else if(v[mid] < target)
            low = mid + 1;
        else
            high = mid -1;
    }
    return -1;
}