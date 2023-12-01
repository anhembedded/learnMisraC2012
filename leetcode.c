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
 * @param numOfE Number of elements in the array.
 * @return The new size of the array after removing the duplicates.
 */
int32_t removeDuplicate(uint32_t u32_Array[1000], uint32_t numOfE)  
{
    int64_t u64_sizeOfArray_Elem = numOfE;
    if(numOfE > 1000U)
    {
        u64_sizeOfArray_Elem = (int32_t)-1;
    }else
    {
        uint32_t u32_currentHead = 0U;
        while(u32_currentHead < u64_sizeOfArray_Elem)
        {
            for(uint32_t u32_i = u32_currentHead + 1U; u32_i < u64_sizeOfArray_Elem; u32_i++)
            {
                if(u32_Array[u32_currentHead] == u32_Array[u32_i])
                {
                    u32_Array[u32_i] = u32_Array[u64_sizeOfArray_Elem - 1U];
                    u64_sizeOfArray_Elem--;
                }else { /* for Misra rule */ }
            }
            u32_currentHead++;
        }
    }
    
    return u64_sizeOfArray_Elem;
}

