//
// Created by PC on 12/11/2023.
//

#include "productExceptSelf.h"


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int temp = 1;

    // Initialize the return array with 1
    int* res = (int*)malloc(numsSize * sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        res[i] = 1;
    }

    // Calculate left product array and store it in res
    for(int i = 0; i < numsSize; i++) {
        res[i] *= temp;
        temp *= nums[i];
    }

    // Reset temp
    temp = 1;

    // Calculate right product array on the fly and multiply it with left product
    for(int i = numsSize - 1; i >= 0; i--) {
        res[i] *= temp;
        temp *= nums[i];
    }

    *returnSize = numsSize;
    return res;
}