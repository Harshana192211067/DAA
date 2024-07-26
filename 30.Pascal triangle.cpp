#include <stdio.h>

// Function to generate Pascal's Triangle

void generatePascalsTriangle(int n) {

int triangle[n][n];

// Initialize all entries to 0

for (int line = 0; line < n; line++) {

for (int i = 0; i <= line; i++) {

// First and last values in every row are 1

if (i == 0 || i == line) {

triangle[line][i] = 1;

} else {

// Other values are sum of values just above and left of above

triangle[line][i] = triangle[line - 1][i - 1] + triangle[line - 1][i];

}

printf("%d ", triangle[line][i]);

}

printf("\n");

}

}

int main() {

int n;

printf("Enter the number of rows in Pascal's Triangle: ");

scanf("%d", &n);

generatePascalsTriangle(n);

return 0;

}
