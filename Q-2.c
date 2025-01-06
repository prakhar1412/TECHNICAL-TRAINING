#include <stdio.h>

void findNonRepeatingElements(int arr[], int n) {
    int xorResult = 0;
    
    // Step 1: XOR all elements
    for (int i = 0; i < n; i++) {
        xorResult ^= arr[i];
    }

    // Step 2: Find a set bit (rightmost set bit)
    int setBit = xorResult & -xorResult;

    // Step 3: Divide elements into two groups and XOR them
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] & setBit) == 0) {
            num1 ^= arr[i];  // Group 1
        } else {
            num2 ^= arr[i];  // Group 2
        }
    }

    printf("The two non-repeating elements are: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {4, 5, 6, 7, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findNonRepeatingElements(arr, n);
    
    return 0;
}