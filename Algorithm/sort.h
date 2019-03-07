//
// Created by liumihan on 19-3-6.
//

#ifndef GETMYOFFER_SORT_H
#define GETMYOFFER_SORT_H

#include <vector>

class Sort {
public:
    static void bubbleSort(std::vector<int>& v);
    static void selectSort(std::vector<int>& v);
    static void insertSort(std::vector<int>& v);
    static void quickSort(std::vector<int>& v, int low, int high);
    static void partQuickSort(std::vector<int>& v);
};


#endif //GETMYOFFER_SORT_H
