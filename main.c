#include <stdio.h>
#include <stdint.h>
#include "countBitOne.h"

static int32_t go = 0;
static uint32_t accsending[10] = {1U,2U,3u,2u,4u,5u,12U,34U,45U,333U};
static char letter = 'a';
static uint8_t val = -5; 
int32_t main(void) {
/*   1. The binary + and += operators may have one operand with essentially character type and the 
other operand with an essentially signed or essentially unsigned type;
2. The binary - and -= operators may have a left-hand operand with essentially character type 
and a right-hand operand with an essentially signed or essentially unsigned type. */
static char letter = 'a';
letter = letter + 2; // compliant by exception 1
letter = letter - 3; // compliant by exception 2

return 0;
}
