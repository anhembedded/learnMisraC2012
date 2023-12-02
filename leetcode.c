#include "codeLearnIo.h"

/**
 * @brief Remove duplicate elements from an array.
 *
 * This function removes duplicate elements from an array by shifting the elements
 * to the left. It iterates through each element in the array and checks if it has
 * already been encountered. If it is a duplicate, it skips the element and continues.
 * Finally, the function returns the new size of the array after removing the duplicates.
 *
 * @param u32_Array Pointer to the array.
 * @param u32_numOfE Number of elements in the array.
 * @return The new size of the array after removing the duplicates.
 */
int64_t removeDuplicate(uint32_t u32_Array[ARR_MAX_SIZE], uint32_t u32_numOfE)
{
    int64_t s64_sizeOfArray_Elem = (int64_t)u32_numOfE;
    if (u32_numOfE > (uint32_t)ARR_MAX_SIZE)
    {
        s64_sizeOfArray_Elem = (int32_t)-1;
    }
    else
    {
        uint32_t u32_currentHead = 0U;
        while ((int64_t)u32_currentHead < s64_sizeOfArray_Elem)
        {
            for (uint32_t u32_i = u32_currentHead + 1U; (int64_t)u32_i < s64_sizeOfArray_Elem; u32_i++)
            {
                if (u32_Array[u32_currentHead] == u32_Array[u32_i])
                {
                    u32_Array[u32_i] = u32_Array[s64_sizeOfArray_Elem - (int64_t)1U];
                    s64_sizeOfArray_Elem--;
                }
                else
                { 
                    /* for Misra rule */
                }
            }
            u32_currentHead++;
        }
    }
    return s64_sizeOfArray_Elem;
}
/**
 * @brief Find the majority element in an array using Moore's Voting Algorithm.
 *
 * This function finds the majority element in an array using Moore's Voting Algorithm.
 * If a majority element exists, it returns the majority element. Otherwise, it returns -1.
 *
 * @param u8_arr Pointer to the array.
 * @param u32_numOfE Number of elements in the array.
 * @return The majority element if it exists, otherwise -1.
 */
int32_t majorityElement(uint8_t const u8_arr[ARR_MAX_SIZE], uint32_t u32_numOfE)
{
    int32_t s32_majority = 0;
    uint16_t u16_count = 1U;

    if (u32_numOfE > (uint32_t)ARR_MAX_SIZE)
    {
        /*!Note: input validation */
        s32_majority = (int32_t)-1;
    }
    else
    {
        s32_majority = (int32_t)u8_arr[0];
        for (uint32_t i = 0; i <= (uint32_t)ARR_MAX_SIZE; i++)
        {
            if (s32_majority == (int32_t)u8_arr[i])
            {
                u16_count++;
            }
            else
            {
                u16_count--;
            }
            if (u16_count == 0U)
            {
                u16_count = 1U;
                s32_majority = (int32_t)u8_arr[i];
            }
            else
            {
                /* for Misra rule */
            }
        }
        /* verify majority number's frequency is more than half */
        uint16_t u16_majorityCountCheck = 0U;
        for (uint32_t i = 0U; i < u32_numOfE; i++)
        {
            if (s32_majority == (int32_t)u8_arr[i])
            {
                u16_majorityCountCheck++;
            }
            else
            {
                /* for Misra rule */
            }
        }
        if (u16_majorityCountCheck >= ((uint16_t)(u32_numOfE / 2)))
        {
            /*do Nothing, verify pass*/
        }
        else
        {
            s32_majority = -1;
        }
    }
    return (s32_majority);
}
