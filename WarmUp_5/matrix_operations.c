#include <stdio.h>
#include <stdlib.h>

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int sum[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int rowsA, int colsA, int colsB, int a[rowsA][colsA], int b[colsA][colsB], int product[rowsA][colsB]) {
    if (rowsA != colsB) {
        printf("Error: Matrices do not conform for multiplication; A's rows do not equal B's columns\n");
        exit(1);
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[2][2] = {{1,2}, {3,4}};
    int secondMatrix[2][2] = {{5,6}, {7,8}};
    int sum[2][2]; 
    int product[2][2];
    
    if (sizeof(firstMatrix) != sizeof(secondMatrix)) {
        printf("Error: Matrices do not conform for addition; dimensions do not match\n");
        exit(1);
    }

    addMatrices(2, 2, firstMatrix, secondMatrix, sum);

    multiplyMatrices(2, 2, 2, firstMatrix, secondMatrix, product);

    printf("Matrix Addition:\n");
    printMatrix(2, 2, sum);

    printf("Matrix Multiplication:\n");
    printMatrix(2, 2, product);

    return 0;
}
