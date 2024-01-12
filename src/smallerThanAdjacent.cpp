//
// Created by PC on 1/12/2024.
//

#include "smallerThanAdjacent.hpp"

std::vector<int32_t> smallerThanAdjacent(std::vector<int32_t> &vectParam) {
    std::vector<int32_t> vectRes;
    if ((vectParam.empty() == true) || (vectParam.size() < 3)) {
        //check Input validate
    } else {
        for (size_t i = 1; i < (vectParam.size() - 1); i++) {
            if ((vectParam[i] < vectParam[i - 1]) && (vectParam[i] < vectParam[i + 1])) {
                vectRes.push_back(vectParam[i]);
            }
        }
    }
    return vectRes;
}

std::list<int32_t> smallerThanAdjacent(std::list<int32_t> &listParam) {
    std::list<int32_t> listRes;
    if ((listParam.empty() == true) || (listParam.size() < 3)) {
        //check Input validate
    } else {
        auto iter_list = listParam.begin();
        auto iter_leftAdj = listParam.begin();
        auto iter_rightAdj = listParam.begin();
        std::advance(iter_list, 1);
        std::advance(iter_rightAdj, 2);

        for (size_t i = 1; i < (listParam.size() - 1); i++) {
            if (*iter_list < *iter_leftAdj && *iter_list < *iter_rightAdj) {
                listRes.push_back(*iter_list);
            } else {
                // for misra rule 18.5
            }
            iter_list++;
            iter_rightAdj++;
            iter_leftAdj++;
        }
    }
    return listRes;
}