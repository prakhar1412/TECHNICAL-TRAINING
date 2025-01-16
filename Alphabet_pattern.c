// alphabet pattern for n = 5
#include <stdio.h>

int main() {
    int n = 5; 
    int i, j;

    for (i = 1; i <= n; i++) {
        char ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        ch--; 
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}