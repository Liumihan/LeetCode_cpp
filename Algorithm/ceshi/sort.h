//
// Created by liumihan on 19-3-8.
//

#ifndef GETMYOFFER_SORT_H
#define GETMYOFFER_SORT_H

#include <vector>

namespace m_sort{
    class Sort {
    public:
        static void bubbleSort(std::vector<int>& v);
        static void quickSort(std::vector<int>& v, int low, int high);
        static void selectSort(std::vector<int>& v);
        static void insertSort(std::vector<int>& v);
        static void merge(std::vector<int>& v, int low, int high);
        static void mergeSort(std::vector<int>& v, int low, int high);
    };
}


#endif //GETMYOFFER_SORT_H
