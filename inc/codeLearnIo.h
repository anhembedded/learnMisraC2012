#ifndef C_PROJECT_LEARNMISRAC2012_CODELEARNIO_H
#define C_PROJECT_LEARNMISRAC2012_CODELEARNIO_H
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include "embeddedSys.h"


bool isSortArray(const uint32_t *arr, uint32_t nOfE);
uint32_t arrayChange(const uint32_t u32P_arr[ARR_MAX_SIZE], uint32_t u32_nOfE);
bool isValidParentheses(const char *chrP_messg, uint32_t u32_messgBound);
int64_t removeDuplicate(uint32_t u32_Array[ARR_MAX_SIZE], uint32_t u32_numOfE);


#endif  // C_PROJECT_LEARNMISRAC2012_CODELEARNIO_H
