#include "codeLearnIo.h"

uint32_t arrayChange(uint32_t u32P_arr[5], uint32_t u32_nOfE)
{
    uint32_t u32_step = 0U;
    int64_t s32_diff = 0U;
    if ((u32P_arr != NULL) && (u32_nOfE == 5U))
    {
        for (uint32_t i = 0; i < (u32_nOfE - 1U); i++)
        {
            s32_diff = (int64_t)u32P_arr[i + 1] - u32P_arr[i];
            if (s32_diff <= 0)
            {
                u32_step = (u32_step + ((uint32_t)s32_diff + 1U));
            }
            else
            { /* for Misra rule */
            }
        }
    }
    else
    {
        u32_step = 0U;
    }
    return u32_step;
}