//
// Created by PC on 12/10/2023.
//
#include "maximizeProfit.h"

/**
 * @brief      This function calculates the maximum profit that can be made from buying and selling stocks.
 *
 * @param      s32_prices       The array of prices stored as 32-bit signed integers.
 * @param[in]  s32_pricesSize   The size of the prices array.
 *
 * @return     The maximum possible profit based on the input prices. If the prices array size is not valid,
 *             the function returns -1.
 */
int32_t maxProfit(int32_t s32_prices[ARR_MAX_SIZE], int32_t s32_pricesSize)
{
    int32_t s32_profit = 0U;
    int32_t s32_sale ;
    int32_t s32_buy;
    if((s32_pricesSize<= ARR_MAX_SIZE) && (s32_pricesSize >= (int32_t)2U))
    {
        s32_buy = s32_prices[0U];
        for(uint32_t u32_i =1U; u32_i< s32_pricesSize; u32_i++)
        {
            s32_sale = s32_prices[u32_i];
            if(s32_sale > s32_buy)
            {
                int32_t u32tempProfit = s32_sale - s32_buy;
                if(u32tempProfit > s32_profit)
                {
                    s32_profit = u32tempProfit;
                }else
                {
                    /* For Misra rule */
                }
            }else
            {
                s32_buy = s32_prices[u32_i];
            }
        }
    }else
    {
        s32_profit = -1;
    }
    return s32_profit;
}