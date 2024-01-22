#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;
    for (int i = 0; i < arrayLength; i++) {
        sum += numbers[i];
    }
    double average = (double)sum / arrayLength;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}