#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "codeLearnIo.h"

int main() {
    printf("%s\n", isValidParentheses("()", 3) ? "true" : "false");  // Expected output: true
    printf("%s\n", isValidParentheses("()[]{}", 7) ? "true" : "false");  // Expected output: true
    printf("%s\n", isValidParentheses("(]", 3) ? "true" : "false");  // Expected output: false
    printf("%s\n", isValidParentheses("([)]", 5) ? "true" : "false");  // Expected output: false
    printf("%s\n", isValidParentheses("{[]}", 5) ? "true" : "false");  // Expected output: true
    printf("%s\n", isValidParentheses("", 1) ? "true" : "false");  // Expected output: true
    printf("%s\n", isValidParentheses("[", 2) ? "true" : "false");  // Expected output: false
    printf("%s\n", isValidParentheses("]]", 3) ? "true" : "false");  // Expected output: false
    return 0;
}