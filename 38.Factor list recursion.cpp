#include <stdio.h>

void factors(int n, int i)
{
	// Checking if the number is less than N
	if (i <= n) {
		if (n % i == 0) {
			printf("%d ",i);
		}
		factors(n, i + 1);
	}
}

// Driver code
int main()
{
	int N = 6;
	factors(N, 1);
}

