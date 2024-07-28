#include <stdio.h>

int main() {
  int arr[100], i, n, key;
  printf("Enter the number of elements you want to sort:\n");
  scanf("%d", &n);
  printf("Now enter the %d elements you want to sort: \n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Before sorting:\n");
  for (i = 0; i < n; i++) {
    printf("%d \t", arr[i]);
  }

  // Selection Sort Logic Embedded in Main
  for (int step = 0; step < n - 1; step++) {
    int min = step;
    int temp;
    for (int j = step + 1; j < n; j++) {
      if (arr[j] < arr[min])
        min = j;
    }
    // Swap the found minimum element with the first element
    temp = arr[min];
    arr[min] = arr[step];
    arr[step] = temp;
  }

  printf("\nAfter Sorting using Selection Sort:\n");
  for (i = 0; i < n; ++i) {
    printf("%d \t", arr[i]);
  }

  return 0;
}

