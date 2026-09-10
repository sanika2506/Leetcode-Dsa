#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    // 1. Handle negative numbers
    if (x < 0) return false;

    long long rev = 0; 
    int temp = x;
    int digit;

    while (x > 0) {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    // 4. Comparison
    return (temp == rev);
}
