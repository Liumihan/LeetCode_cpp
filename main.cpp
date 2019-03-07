#include <iostream>
#include <cstdio>
#include "1-cmystring/cmystring.h"
#include "2-duplicate/duplicate.h"
#include "2-duplicate_2/duplicate_2.h"
#include "bin_find/BinFind.h"
#include "lookup_table/lookuptable.h"
#include "cmath"
#include "Algorithm/search.h"
#include "Algorithm/sort.h"
#include <vector>
int main() {
    std::cout << "Hello, World!" << std::endl;
    // #1 CMystring
//    CMyString a("123");
//    CMyString b;
//    b = a;

    // #2 2-duplicate
//    int num1[] = {2, 3, 1, 2, 0, 4, 4, 5};
//    int num2[] = {1};
//    int num3[] = {1, 3, 2, 5, 3};
//    int dup;
//    bool have =  Duplicate::duplicate(num3, sizeof(num3)/sizeof(int), &dup);
//    if(have)
//        printf("%d\n", dup);
//    else
//        printf("Don't have\n");

    // #3 2-duplicate_2
//    int num1[] = {2, 3, 4, 2, 5, 4};
//    int num2[] = {1, 2, 3, 4, 5};
//    int num3[] = {};
//    int* num4 = nullptr;
//
//    int result = Duplicate_2::getDuplication(num2, sizeof(num2) / sizeof(int));
//    printf("result %d\n", result);
//
//    // playground
//    int a = -1;
//    int b = 6;
//    int c = (a + b) >> 1; //右移一位相当于除以2
//    printf("c: %d\n", c);

    //bin_find
//    int nums[] = {2, 2, 3, 4, 5, 5, 6, 7};
//    int zeros[10] = {0};
//    int val = 4;
//    int found = -1;
//    found = BinFind::sequentialSearch(nums, sizeof(nums) / sizeof(int), val);
//    printf("pos: %d %s.", found, "123");
    //Lookup table
//    LookUpTable LT(&sin);
//    LT.table;
//    double sin1 = LT.table[90];
//    double *ta = LT.table; //数组名就是一个指针
//    printf("ta: %f", ta[90]);
//    printf("True: %f  Pre: %f",sin(90 * 3.1415 / 180), sin1);

    //Search
//    std::vector<int> v = {1, 2, 3, 5, 6, 8, 9};
//    int target = 6;
//    int find = -1;
//    find = Search::sequentialSearch(v, target);
//    find = Search::binarySearchRc(v, target, 0, sizeof(v) / sizeof(int));
//    find = Search::insertSearchRc(v, target, 0, sizeof(v)/sizeof(int));
//    printf("Search: %d", find);
    //Sort
    std::vector<int> v = {5, 4, 2, 1, 3, 6, 5};
//    Sort::bubbleSort(v);
//    Sort::selectSort(v);
//    Sort::insertSort(v);
    Sort::quickSort(v);
    for(int i = 0; i < v.size(); ++i){
        printf("%d, ", v[i]);
    }
    printf("\n");
    return 0;
}