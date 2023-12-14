//
// Created by PC on 12/13/2023.
//

#include "kidWithCandies.h"
#include <limits.h>

/**
 * @brief Determines whether each child can have the greatest number of candies after giving them extra candies.
 *
 * @param s32_candies An array representing the initial number of candies each child has.
 * @param s32_candiesSize The size of the s32_candies array.
 * @param s32_extraCandies The number of extra candies that you are giving.
 * @param u32_result An array to store the results. Will be filled with 1s or 0s. A 1 means the child with that index can have the most candies when given the extra candies, and a 0 means they cannot.
 *
 * @return The Input validation, 1 is pass, 0 is fail
 */
uint32_t u32_kidsWithCandies(const int32_t  s32_candies[ARR_MAX_SIZE], int32_t s32_candiesSize,
                             int32_t s32_extraCandies, uint32_t u32_result[ARR_MAX_SIZE])
{
    uint32_t res = 0U;
    uint32_t u32_isCandiesLessThanZero_flag = 0U;
    if((s32_candies != NULL) && (u32_result != NULL) && (s32_extraCandies<= (int32_t)ARR_MAX_SIZE))
    {
        /* Input validation pass */
        int32_t s32_maxCandies = 0U;
        for (uint32_t  u32_i = 0U; u32_i < s32_candiesSize; u32_i++)
        {
            /* check if s32_candies is less than zero */
            if(s32_candies[u32_i] < 0)
            {
                res = 0Ul;
                u32_isCandiesLessThanZero_flag = 1U;
                break;
            }else if (s32_candies[u32_i] > s32_maxCandies)
            {
                /* find maxCandies */
                s32_maxCandies = s32_candies[u32_i];
            } else
            {
                /* Do nothing, For Misra rule 15.9 */
            }
        }
        if(u32_isCandiesLessThanZero_flag == 0U)
        {
            for (uint32_t  u32_i = 0U; u32_i < s32_candiesSize; u32_i++)
            {
                if ((s32_candies[u32_i] + s32_extraCandies) > s32_maxCandies)
                {
                    u32_result[u32_i] = 1U;
                }else
                {
                    u32_result[u32_i] = 0U;
                }
            }
            res = 1U;
        }else
        {
            /* Do nothing, For Misra rule 15.9 */
        }

    }else
    {
        /* Input validation fail */
        res = 0U;
    }
    return (res);
}