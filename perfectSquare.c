#include "codeLearnIo.h"

/**
 * @brief Check if a number is a perfect square.
 * 
 * This function checks if a given number is a perfect square.
 * A perfect square is a number that can be expressed as the product of two equal integers.
 * 
 * @param num The number to be checked.
 * @return true if the number is a perfect square, false otherwise.
 */
static inline bool isPerfectSquare(int32_t num)
{
    if (num < 1)
    {
        return false;
    }
    int32_t s32_i = 1;
    while (((s32_i * s32_i) <= num) && (s32_i <= ARR_MAX_SIZE))
    {
        if ((s32_i * s32_i) == num)
        {
            return true;
        }
        s32_i++;
    }
    return false;
}
/**
 * @brief Calculate the average of perfect square numbers in an array.
 * 
 * This function calculates the average of perfect square numbers in an array.
 * It iterates through each element in the array and checks if it is a perfect square.
 * If a perfect square is found, its value is added to the sum.
 * Finally, it divides the sum by the number of perfect square numbers found to get the average.
 * 
 * @param u32_array Pointer to the array.
 * @param u32_nOfE Number of elements in the array.
 * @return The average of the perfect square numbers. If no perfect square numbers are found, return 0.
 */
uint32_t avgPerfectSquareArray(uint32_t u32_array[ARR_MAX_SIZE], uint32_t u32_nOfE)
{
    if ((u32_array == NULL) || (u32_nOfE >= ARR_MAX_SIZE) || (u32_nOfE == 0U))
    {
        return 0U;
    }
    uint32_t u32_sum = 0U;
    for (uint32_t i = 0U; i < u32_nOfE; i++)
    {
        if (isPerfectSquare((int32_t)u32_array[i]))
        {
            u32_sum = u32_sum + u32_array[i];
        }
    }
    u32_sum = u32_sum / u32_nOfE;
    return u32_sum;
}