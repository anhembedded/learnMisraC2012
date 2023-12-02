#ifndef CF2CB7EF_5FDF_4A3B_8637_C67DD688251E
#define CF2CB7EF_5FDF_4A3B_8637_C67DD688251E
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

enum systemDef
{
    ARR_MAX_SIZE = 1000
};

bool isSortArray(uint32_t *arr, uint32_t nOfE);
uint32_t arrayChange(uint32_t u32P_arr[ARR_MAX_SIZE], uint32_t u32_nOfE);
bool isValidParentheses(const char *chrP_messg, uint32_t u32_messgBound);
int64_t removeDuplicate(uint32_t u32_Array[ARR_MAX_SIZE], uint32_t u32_numOfE);
int32_t majorityElement(uint8_t const u8_arr[ARR_MAX_SIZE], uint32_t numOfE);

#endif /* CF2CB7EF_5FDF_4A3B_8637_C67DD688251E */
