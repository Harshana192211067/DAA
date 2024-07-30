#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int pascal[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            // The first and last values in every row are 1
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                // Other values are the sum of the values just above and to the left of above
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}

