
#include "codeLearnIo.h"
#include <assert.h>

void test_isSortArray() {
    // Test case 1: Sorted in increasing order
    uint32_t arr1[] = {1, 2, 3, 4, 5};
    assert(isSortArray(arr1, 5));

    // Test case 2: Sorted in decreasing order
    uint32_t arr2[] = {5, 4, 3, 2, 1};
    assert(isSortArray(arr2, 5));

    // Test case 3: Not sorted
    uint32_t arr3[] = {1, 3, 2, 5, 4};
    assert(!isSortArray(arr3, 5));

    // Test case 4: Single element array
    uint32_t arr4[] = {1};
    assert(isSortArray(arr4, 1));

}
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
bool isSortArray(uint32_t *arr, uint32_t nOfE)
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
