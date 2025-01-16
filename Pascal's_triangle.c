#include <stdio.h>
int main() {
  
    int n = 5; 

    // Outer loop to print each row
    for (int i = 0; i < n; i++) {
        
        // Print leading spaces for alignment
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");

        // Print values in row
        int val = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", val);
          
            // Calculate the next value in the row
            val = val * (i - k) / (k + 1);  
        }
        printf("\n");
    }

    return 0;
}