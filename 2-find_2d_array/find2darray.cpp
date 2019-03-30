//
// Created by liumihan on 19-3-30.
//

#include "find2darray.h"

bool Find2DArray::find(std::vector<std::vector<int>> &matrix, int rows, int cloums, int target){
    bool found = false;
    if (matrix.size() <= 0 || rows <= 0 || cloums <= 0)
        return false;
    int idx_row = 0;
    int idx_col = cloums - 1;
    while(idx_row < rows && idx_col >= 0){
        if(matrix[idx_row][idx_col] == target)
            return true;
        else if(matrix[idx_row][idx_col] > target){
            --idx_col;
        }
        else{
            ++idx_row;
        }
    }
    return found;
}
