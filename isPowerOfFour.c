#include "isPowerOfFour.h"
#include <math.h>

uint32_t isPowerOfFour(uint32_t number)
{
    uint32_t res = 0U;
    if((number < 50000U) && (number >= 4U))
    {
        uint32_t i = 1U;
        while((4*i) <= number)
        {
            i++;
        }
        if(number == (uint32_t)pow((double_t)4,(double_t)i))
        {
            res = 1U;
        }else
        {
            res = 0U;
        }
    }else
    {
        res = 0U;
    }
    return (res);
}