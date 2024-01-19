#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, sum, difference, product, quotient;

    printf("Enter the first number:\n");
    scanf("%lf", &num1);

    printf("Enter the second number:\n");
    scanf("%lf", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);
    printf("The difference of %.2lf and %.2lf is %.2lf\n", num1, num2, difference);
    printf("The product of %.2lf and %.2lf is %.2lf\n", num1, num2, product);
    printf("The quotient of %.2lf and %.2lf is %.2lf\n", num1, num2, quotient);
    
    return 0;
}