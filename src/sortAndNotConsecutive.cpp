//
// Created by PC on 1/11/2024.
//

#include "sortAndNotConsecutive.hpp"
bool isSortAndNotConsecutive(std::vector<int32_t> &vectorParam) {
    bool res;
    if(vectorParam.empty() == true)
    {
        res = false;
    }else
    {
        std::sort(vectorParam.begin(), vectorParam.end());
        auto isConsecutive = std::adjacent_find(vectorParam.begin(), vectorParam.end());
        if(isConsecutive == vectorParam.end())
        {
            res = true;
        }else
        {
            res = false;
        }
    }
    return res;
}