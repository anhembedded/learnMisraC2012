
#include "codeLearnIo.h"
#include <assert.h>


/**
 * @brief Check if an array is sorted in non-decreasing order.
 * @author Anh.Embedded
 * This function takes an array and its length as input and checks if the array is
 * sorted in non-decreasing order. The array is considered sorted if each element is
 * less than or equal to the next element.
 * 
 * @param arr Pointer to the array.
 * @param nOfE Number of elements in the array.
 * @return true if the array is sorted, false otherwise.
 */
bool isSortArray(const uint32_t *arr, uint32_t nOfE)
{
    bool result = false;
    bool isIncreasing = true;
    bool isDecreasing = true;

    if ((arr != NULL) && (nOfE >= 2)) /* external input vaidate */
    {
       
        for (uint32_t i = 1U; i < nOfE; i++)
        {
            if (arr[i - 1U] > arr[i])
            {
                isIncreasing = false;
            }
            else if (arr[i - 1U] < arr[i])
            {
                isDecreasing = false;
            }
            else
            {
            }
        }
        result = (isIncreasing || isDecreasing);
    }
    else
    {
        result = false;
    }
    return (result);
}
