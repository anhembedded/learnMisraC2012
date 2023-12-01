#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "codeLearnIo.h"

int32_t removeDuplicate(uint32_t u32_Array[1000], uint32_t numOfE);

int main()
{
    uint32_t arr[10] = {1, 2, 3, 4, 3, 2, 5, 6, 4, 7};
    uint32_t size = 10;
    
    int32_t newSize = removeDuplicate(arr, size);
    
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < newSize; i++)
    {
        printf("%u ", arr[i]);
    }
    printf("\n");
    
    return 0;
}