//
// Created by liumihan on 19-3-6.
//

#ifndef GETMYOFFER_SEQUENTIALSEARCH_H
#define GETMYOFFER_SEQUENTIALSEARCH_H

#include <vector>

class Search {
public:
    static int sequentialSearch(const std::vector<int> &v, int target);
    static int binarySearch(const std::vector<int> &v, int target);
    static int binarySearchRc(const std::vector<int> &v, int target, int low, int high);
    static int insertSearch(const std::vector<int> &v, int target, int low, int high);
    static int insertSearchRc(const std::vector<int> &, int target, int low, int high);
};


#endif //GETMYOFFER_SEQUENTIALSEARCH_H
