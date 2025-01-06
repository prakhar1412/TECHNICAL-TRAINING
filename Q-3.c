#include <stdio.h>

int isPowerOfTwo(int n) {
    // A number is a power of two if it is greater than 0 and
    // the bitwise AND of n and (n - 1) is 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a power of two
    if (isPowerOfTwo(number)) {
        printf("%d is a power of two.\n", number);
    } else {
        printf("%d is not a power of two.\n", number);
    }

    return 0;
}