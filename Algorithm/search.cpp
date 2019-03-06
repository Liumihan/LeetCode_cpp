//
// Created by liumihan on 19-3-6.
//

#include "search.h"

int Search::sequentialSearch(const std::vector<int> &v, int target) {
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == target)
            return i;
    }
    return -1;
}

int Search::binarySearch(const std::vector<int> &v, int target) {
    if(v.size() <= 0)
        return -1;
    int low = 0;
    int high = v.size() - 1;
    while(low <= high){
        int mid = low + ((high - low) >> 1);
        if(v[mid] == target)
            return mid;
        else if(v[mid] > target)
            high = mid - 1;
        else
            low  = mid + 1;
    }
    return -1;
}

int Search::binarySearchRc(const std::vector<int> &v, int target, int low, int high) {
    if(low > high)
        return -1;
    int mid = low + ((high - low) >> 1);
    if(v[mid] == target)
        return mid;
    else if(v[mid] > target)
        return binarySearchRc(v, target, low, mid-1);
    else
        return binarySearchRc(v, target, mid+1, high);
}

int Search::insertSearch(const std::vector<int> &v, int target, int low, int high) {
    if(v.size() <= 0)
        return -1;
    while(low <= high){
        int mid = low + ((target - v[low])/(v[high] - v[low])) * (high - low);
        if(v[mid] == target)
            return mid;
        else if(v[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int Search::insertSearchRc(const std::vector<int> &v, int target, int low, int high) {
    if(low > high)
        return -1;
    int mid = low + ((target - v[low]) / (v[high] - v[low])) * (high - low);
    if(target == v[mid])
        return mid;
    else if(target > v[mid])
        return insertSearchRc(v, target, mid + 1, high);
    else
        return insertSearchRc(v, target, low, mid - 1);
}