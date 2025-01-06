#include <stdio.h>

int findSetBitPosition(int n) {
    // Check if n is a power of two
    if (n <= 0 || (n & (n - 1)) != 0) {
        return -1; // Return -1 if n is not a power of two
    }

    int position = 1; // Position starts from 1 (for the least significant bit)
    
    // Loop to find the position of the set bit
    while (n > 1) {
        n >>= 1; // Right shift n by 1
        position++; // Increment position
    }

    return position; // Return the position of the set bit
}

int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the position of the only set bit
    int position = findSetBitPosition(number);
    
    if (position != -1) {
        printf("The position of the only set bit in %d is: %d\n", number, position);
    } else {
        printf("%d is not a power of two, so it does not have a single set bit.\n", number);
    }

    return 0;
}