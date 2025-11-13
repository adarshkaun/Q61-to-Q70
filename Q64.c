#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0}; // digit count array

    printf("Enter any integer number: ");
    scanf("%lld", &n);

    // If number is negative, make it positive
    if (n < 0) n = -n;

    // Count digits
    while (n > 0) {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    // Find the digit with max frequency
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit with maximum frequency: %d\n", maxDigit);

    return 0;
}
