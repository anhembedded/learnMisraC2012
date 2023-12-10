#include "rotateArray.h"

static inline void swap(int32_t *a, int32_t *b)
{
    int32_t temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * @brief Rotates an array by a specified number of steps.
 *
 * This function rotates an array of integers by a specified number of positions.
 * It uses the swap function to move elements efficiently.
 *
 * @param u32arr_nums The array of integers to be rotated.
 * @param u32_numsSize The size of the array.
 * @param u32_k The number of positions to rotate the array by.
 * @return 1 on success, -1 if invalid input is provided.
 */
int32_t s32_rotateArray(int32_t s32arr_nums[ARR_MAX_SIZE], uint32_t u32_numsSize, uint32_t u32_k)
{
    int32_t res = 1;
    int32_t temp;
    const uint32_t u32_firstPos = (u32_numsSize - u32_k) -1;
    uint32_t u32_currentIndex = u32_firstPos;
    uint32_t u32_nextIndex = (u32_currentIndex + u32_k) % u32_numsSize;
    if((u32_numsSize <= ARR_MAX_SIZE) && (u32_k <= u32_numsSize))
    {
        if(u32_numsSize != u32_k)
        {
            temp = s32arr_nums[u32_currentIndex];

            while(u32_nextIndex != u32_firstPos)
            {
                swap(&s32arr_nums[u32_nextIndex] , &temp);
                u32_currentIndex = u32_nextIndex;
                u32_nextIndex = (u32_currentIndex + u32_k) % u32_numsSize;
            }
            swap(&s32arr_nums[u32_nextIndex] , &temp);
        }else
        {

        }

    }else
    {
        res = -1;
    }
    return (res);
}