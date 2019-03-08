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

void Sort::quickSort(std::vector<int> &v, int low, int high){
    /*
    * v：待排序的数组；
    * low , high:待排序的区间 */
    if(low >= high){
        return;
    }
    int i = low; //两个滑动指针
    int j = high;
    int key = v[i];

    while(i < j){ //当i < j的时候，i和j分别执行一次滑动
        //向左边滑动j
        while(v[j] >= key && i < j){
            j--;
        }
        //找到了第一个比key小的数，交换(此时的key值在i的位置）
        if(i < j){
            int temp;
            temp = v[j];
            v[j] = v[i];
            v[i] = temp;
        }

        //向右边滑动i
        while(v[i] <= key && i < j){
            ++i;
        }
        //找到第一个比key大的数字，交换（此时key的值在j的位置）
        if(i < j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    //执行了一次快排之后，i和j是重合了的

    //对key左侧的和右侧的重复操作
    quickSort(v, low, i - 1);
    quickSort(v, i + 1, high);
}

void Sort::m_quickSort(std::vector<int> &v, int low, int high) {
    //最后一步 填写终止迭代的条件
    if(low >= high){
        return;
    }


    //初始左右滑动指针
    int i = low;
    int j = high;
    int pivot = v[low];

    while(i < j){
        //从右边开始滑动到左边，找到第一个比pivot小的数字；
        while(v[j] >= pivot && i < j)
            --j;
        //交换 (现在的pivot是在i这个位置）
        int temp = v[j];
        v[j] = v[i];
        v[i] = temp;

        //从左边往右边滑动，找到第一个比pivot大的数字；
        while(v[i] <= pivot && i < j)
            ++i;
        int temp2 = v[i];
        v[i] = v[j];
        v[j] = temp2;
        //一次滑动结束 此时 i == j
    }
    //一次快拍结束 此时 i == j

    m_quickSort(v, low, i - 1);
    m_quickSort(v, i + 1, high);
}

void Sort::merge(std::vector<int> &v, int low, int high) {
    std::vector<int> temp;
    int mid = low + (high - low) / 2;
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;
    while(left_low <= left_high && right_low <= right_high)
        if(v[left_low] <= v[right_low])
            temp.push_back(v[left_low++]);
        else
            temp.push_back(v[right_low++]);
    while(left_low <= left_high)
         temp.push_back(v[left_low++]);
    while(right_low <= right_high)
         temp.push_back(v[right_low++]);
    // 这里要注意啊！ 不能直接吧temp赋值给v 这样就不对了
    for (int i = 0; i < high - low + 1; ++i) {
        v[low + i] = temp[i];
    }
    return;
}

// 参数 是 待排序数组、待排序的区间
// 思路 先写一个merge 函数， 注意在merge函数里面需要的是赋值而不是更改整个vector。
// 然后在递归的时候要做到递归，使用后序列遍历。
void Sort::mergeSort(std::vector<int> &v, int low, int high) {
    if(low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);
    merge(v, low, high);
    return;
}