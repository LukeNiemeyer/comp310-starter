#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int arrayLength, int target) {
    for (int i = 0; i < arrayLength; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;

}

int main() {
    int array[] = {1, 4, 7, 9, 12};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int target = 9;
    int index = linearSearch(array, arrayLength, target);
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found");
    }
    return 0;
}