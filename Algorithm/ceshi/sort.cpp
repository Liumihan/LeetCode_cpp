//
// Created by liumihan on 19-3-8.
//

#include "sort.h"

void m_sort::Sort::bubbleSort(std::vector<int> &v) {
    int length = v.size();
    for(int i = 1; i < length - 1; ++i){
        for(int j = length - 1; j >= i; --j){
            if(v[j] < v[j - 1]){
                int temp = v[j];
                v[j] = v[j-1];
                v[j-1] = temp;
            }
        }
    }
}

void m_sort::Sort::insertSort(std::vector<int> &v) {
    for(int i = 1; i < v.size(); ++i){
        int pos = i;
        int temp = v[pos];
        for (int j = i; j >=0 ; --j) {
            if(v[j] > temp) {
                v[j + 1] = v[j];
                pos = j;
            }
        }
        v[pos] = temp;
    }
}

void m_sort::Sort::selectSort(std::vector<int> &v) {
    for (int i = 0; i < v.size() ; ++i) {
        int min_pos = v[i];
        for (int j = i; j < v.size() ; ++j) {
            if (v[j] < v[min_pos])
                min_pos = j;
        }
        int temp = v[i];
        v[i] = v[min_pos];
        v[min_pos] = temp;
    }
}

void m_sort::Sort::quickSort(std::vector<int> &v, int low, int high) {
    if(low >= high)
        return;

    int i = low;
    int j = high;
    int pivot = v[low];

    while(i < j){
        //向左边滑动找到第一个比pivot小的数
        while(v[j] >= pivot && i < j){
            j--;
        }
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        //向右边滑动找到第一个比pivot大的数
        while(v[i] <= pivot && i<j){
            i++;
        }
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    quickSort(v, low, i);
    quickSort(v, i+1, high);
}

void m_sort::Sort::merge(std::vector<int> &v, int low, int high) {
    int mid = low + (high - low) / 2;
    int left_start = low;
    int left_end = mid;
    int right_start = mid+1;
    int right_end = high;
    std::vector<int> temp;
    while(left_start <= left_end && right_start <= right_end){
        if(v[left_start] < v[right_start]){
            temp.push_back(v[left_start++]);
        }
        else
            temp.push_back(v[right_start++]);
    }
    while (left_start <= left_end){
        temp.push_back(v[left_start++]);
    }
    while (right_start <= right_end){
        temp.push_back(v[right_start++]);
    }
    for (int i = 0; i < temp.size(); ++i) {
        v[low+i] = temp[i];
    }
}

void m_sort::Sort::mergeSort(std::vector<int> &v, int low, int high) {
    if(low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid+1, high);
    merge(v, low, high);
}