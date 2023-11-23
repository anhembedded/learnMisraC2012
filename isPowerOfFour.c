#include "isPowerOfFour.h"
#include <math.h>

static uint32_t factorial(uint32_t n)
{
    uint32_t res = 0U;
    if (n <= 25u)
    {
        if (n == 0)
        {
            res = 1u;
        }
        else
        {
            res = 1;
            for (uint32_t i = 1u; i <= n; i++)
            {
                res *= i;
            }
        }
    }
    else
    {
        res = 0U;
    }
    return (res);
}

uint32_t numberOfCombinations(uint32_t n, uint32_t k)
{
    uint32_t res = 0u;
    if ((n <= 25u) && (k <= 25u) && (n >= k))
    {
        res = factorial(n) / ((factorial(k) * factorial(n - k)));
    }
    else
    {
        res = 0u;
    }
    return (res);
}