//
// Created by PC on 12/10/2023.
//
#include "jumpGame.h"

/**
 * @brief Determines if it is possible to jump to the end of the array.
 *
 * This function checks if it is possible to reach the end of the array by jumping.
 * The maximum length of the jump at each position is determined by the value at that position.
 *
 * @param s32arr_nums The input array of integers representing the maximum jump length at each index.
 * @param s32_numsSize The size of the input array.
 *
 * @return uint32_t Returns 1 if it is possible to reach the end of the array, 0 otherwise.
 */
uint32_t canJump(int32_t s32arr_nums[ARR_MAX_SIZE], int32_t s32_numsSize)
{
    uint32_t u32_canJump = 0;
    if((s32arr_nums !=NULL) && (s32_numsSize <= ARR_MAX_SIZE))
    {
        if(s32_numsSize == 1U)
        {
            u32_canJump =1U;
        }else
        {
            int32_t s32_jumpIndex = 1U;

            while( s32_jumpIndex < (s32_numsSize -1))
            {
                if(s32arr_nums[s32_jumpIndex] == 0)
                {
                    u32_canJump = 0U;
                    break;
                }else
                {
                    s32_jumpIndex = s32_jumpIndex + s32arr_nums[s32_jumpIndex];
                }

            }

            if(s32_jumpIndex == (s32_numsSize -1U))
            {
                u32_canJump = 1U;
            }else
            {
                u32_canJump = 0U;
            }
        }
    }else
    {
        u32_canJump = 0U;
    }
    return u32_canJump;
}