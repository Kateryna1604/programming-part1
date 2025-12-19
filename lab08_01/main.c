#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4
#define COLS 4
#define MAX 10

int productSecondaryDiagonal(int m[ROWS][COLS]) {
    int prod = 1;
    for (int i = 0; i < ROWS; i++)
        prod *= m[i][COLS - 1 - i];
    return prod;
}

void rotate180(int m[ROWS][COLS]) {
    for (int i = 0; i < ROWS / 2; i++) {
        for (int j = 0; j < COLS; j++) {
            int tmp = m[i][j];
            m[i][j] = m[ROWS - 1 - i][COLS - 1 - j];
            m[ROWS - 1 - i][COLS - 1 - j] = tmp;
        }
    }
}

int matrixRange(int m[ROWS][COLS]) {
    int min = m[0][0], max = m[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (m[i][j] < min) min = m[i][j];
            if (m[i][j] > max) max = m[i][j];
        }
    }
    return max - min;
}

int matrixMode(int m[ROWS][COLS]) {
    int arr[ROWS * COLS];
    int k = 0;

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            arr[k++] = m[i][j];

    int mode = arr[0], maxCount = 1;

    for (int i = 0; i < k; i++) {
        int count = 1;
        for (int j = i + 1; j < k; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

void printMatrix(int m[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS];

    srand(time(NULL));

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            matrix[i][j] = rand() % 10;

    printf("Initial matrix:\n");
    printMatrix(matrix);

    printf("\nProduct of secondary diagonal: %d\n",
           productSecondaryDiagonal(matrix));

    printf("Range (max - min): %d\n", matrixRange(matrix));

    printf("Mode of matrix: %d\n", matrixMode(matrix));

    rotate180(matrix);
    printf("\nMatrix after 180 degree rotation:\n");
    printMatrix(matrix);

    return 0;
}
