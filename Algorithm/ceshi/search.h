//
// Created by liumihan on 19-3-8.
//

#ifndef GETMYOFFER_SEARCH_H
#define GETMYOFFER_SEARCH_H

#include <vector>

namespace ceshi{
    class Search {
    public:
        static int binSearch(std::vector<int> v, int target);
        static int insertSearch(std::vector<int> v, int target);
    };
}




#endif //GETMYOFFER_SEARCH_H
