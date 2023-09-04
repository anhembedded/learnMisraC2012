#include <stdio.h>
#include <stdint.h>
#include "countBitOne.h"

static int go = 0;
uint32_t accsending[10] = {1U,2U,3u,2u,4u,5u,12U,34U,45U,333U};
int32_t main(void) {
    uint32_t isSort;
    isSort = isSortArray(accsending,10U);

    return 0;

}
