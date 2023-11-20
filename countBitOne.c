//
// Created by PC on 8/20/2023.
//

#include <stdint.h>
#include "countBitOne.h"




uint32_t sumOdd(uint32_t n)
{
    uint32_t u32L_sumOdd = 0U;
    if((n <= 3000U))
    {
        for (uint32_t i = 0U; i <= n; i++)
        {
            if((i%2U) == 1U)
            {
                u32L_sumOdd = u32L_sumOdd + i;
            }else {/* For Misra rule */}
        }
    }else
    {/* For Misra rule */}

    return (u32L_sumOdd);
}



uint32_t isPowerOfFour(uint32_t numb)
{
    uint32_t res;
    if((numb <= 0U) || (numb >= 10000U))
    {
        if((numb % 4U) == 0U)
        {
            res = 1U;
        }else
        {
            res = 0U;
        }
    }else{
        res = 2U;
    }
    return res;
}

uint32_t isSortArray(const uint32_t *arr, uint32_t numOfElem)
{
    uint32_t res;
    uint32_t isDescending = 1U;
    uint32_t isAscending = 1U;
    if((numOfElem <= 10000U) && (arr != (void*)0))
    {
        if(numOfElem <= 2U)
        {
            res = 1U;
        }else
        {
           for(uint32_t i = 1U; i < numOfElem ; i++)
           {
               if(arr[i-1U] < arr[i])
               {
                   isDescending = 0U;
               }else if (arr[i-1U] > arr[i])
               {
                   isAscending = 0U;
               } else {/* for MISRA rules */}
           }
        }
    }else{ /* for MISRA rules */ }
    if((isDescending == 1U)|| (isAscending == 1U))
    {
        res =1U;
    }else
    {
        res = 0U;
    }
    return  res;
}