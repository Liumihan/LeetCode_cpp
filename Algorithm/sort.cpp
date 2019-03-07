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

void Sort::selectSort(std::vector<int>& v) {
    int min_pos = 0;
    int len = v.size();
    for(int i = 0; i < len; ++i){
        min_pos = i;
        for(int j = i; j < len; ++j){
            if(v[j] < v[min_pos]){
                min_pos = j;
            }
        }
        if(i != min_pos){
            int temp = v[min_pos];
            v[min_pos] = v[i];
            v[i] = temp;
        }
    }
}
/*

插入排序思路：
1. 从第一个元素开始，该元素可以认为已经被排序
2. 取出下一个元素，在已经排序的元素序列中从后向前扫描
3. 如果该元素（已排序）大于新元素，将该元素移到下一位置
4. 重复步骤3，直到找到已排序的元素小于或者等于新元素的位置
5. 将新元素插入到该位置后
6. 重复步骤2~5

 */
void Sort::insertSort(std::vector<int> &v) {
    int len = v.size();
    for(int i = 1; i < len; ++i){
        int temp = v[i];
        int pos = i;
        for(int j = i - 1; j >= 0; --j ){
            if(v[j] > temp){
                v[j+1] = v[j]; //后移一位
                pos = j;//记录空的位置
            }
        }
        v[pos] = temp;
    }
}

void Sort::quickSort(std::vector<int> &v, int low, int high) {
    int pivot = v[0];
    if(low >= high)
        return;

}

void Sort::partQuickSort(std::vector<int> &v) {
    int last = v.size() - 1;
    int pivot = v[0];
    int first = 1;
    while(last > first){
        while(v[last] >= pivot && last > first)
            --last;

    }


}