#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "hello";
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int start = 0, end = length - 1; start < end; start++, end--) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}