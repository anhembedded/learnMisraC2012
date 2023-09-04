//
// Created by PC on 8/20/2023.
//

#include <stdint.h>
#include "countBitOne.h"



uint32_t sumOdd(uint32_t n)
{
    uint32_t u32L_sumOdd = 0U;
    if((n <= 3000) && (n >= 0U))
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