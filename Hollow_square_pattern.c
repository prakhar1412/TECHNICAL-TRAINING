// hollow square pattern n = 5
#include <stdio.h>

int main() {
    int n = 5; // Size of the square
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n) {
                // Print numbers for the first and last row
                printf("%d", j);
            } else if (j == 1 || j == n) {
                // Print '1' for the first column and '5' for the last column
                if (j == 1) {
                    printf("1");
                } else {
                    printf("5");
                }
            } else {
                // Print spaces for the hollow part
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}