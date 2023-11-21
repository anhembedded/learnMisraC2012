#include <stdio.h>
#include <stdint.h>
#include "countBitOne.h"

static int32_t go = 0;
static uint32_t accsending[10] = {1U,2U,3u,2u,4u,5u,12U,34U,45U,333U};
static char letter = 'a';
static uint8_t val = -5; 
int32_t main(void) {
  static uint32_t isSort;
    isSort = isSortArray(accsending,10U);
    letter = 'a' - '0';
    (void)printf("%d",isSort);
    (void)printf("%c",letter);
    return 0;
}
