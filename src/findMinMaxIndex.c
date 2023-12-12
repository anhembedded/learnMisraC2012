#include "codeLearnIo.h"

/**
 * @brief Finds the minimum and maximum values in an array and their corresponding indices.
 *
 * This function takes an array and its length as input and finds the minimum and maximum values
 * in the array along with their corresponding indices. The minimum value is stored in the variable
 * pointed to by u32P_minIndex, and the maximum value is stored in the variable pointed to by u32P_maxIndex.
 * The indices of the minimum and maximum values are also stored in the respective variables.
 *
 * @param u32P_arr Pointer to the array.
 * @param u32_nOfE Number of elements in the array.
 * @param u32P_minIndex Pointer to the variable to store the index of the minimum value.
 * @param u32P_maxIndex Pointer to the variable to store the index of the maximum value.
 *
 * @return None.
 */
void findMinMaxIndex(uint32_t const *u32P_arr, uint32_t u32_nOfE, uint32_t  *u32P_minIndex, uint32_t *u32P_maxIndex)
{
    if ((u32P_arr != NULL) && (u32_nOfE >= 1U))
    {
        *u32P_minIndex = 0U;
        *u32P_maxIndex = 0U;
        uint32_t u32_min = u32P_arr[0U];
        uint32_t u32_max = u32P_arr[0U];
        for (uint32_t i = 1U; i < u32_nOfE; i++)
        {
            if (u32P_arr[i] < u32_min)
            {
                u32_min = u32P_arr[i];
                *u32P_minIndex = i;
            }
            if (u32P_arr[i] > u32_max)
            {
                u32_max = u32P_arr[i];
                *u32P_maxIndex = i;
            }
        }  
    }
    else
    {
        *u32P_minIndex = 0U;
        *u32P_maxIndex = 0U;
    }
}