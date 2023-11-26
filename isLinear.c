
#include "codeLearnIo.h"

bool isSortArrray(uint32_t *arr, uint32_t nOfE)
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