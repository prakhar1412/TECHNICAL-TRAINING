#include <stdio.h>

int main() {
    int n = 9; 
    int i, j;
    for (i = 0; i < n / 2 + 1; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (j = 0; j < n - 2 * i; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }
    for (i = n / 2 - 1; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (j = 0; j < n - 2 * i; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}