#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main() {
    int numbers[MAX_SIZE];
    int count = 0;
    int num;

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        if (count < MAX_SIZE) {
            numbers[count++] = num;
        } else {
            printf("Maximum size reached. Cannot add more numbers.\n");
            break;
        }
    }

    printf("The numbers you entered are:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

