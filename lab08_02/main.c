#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int product(int arr[], int n) {
    int prod = 1;
    for (int i = 0; i < n; i++)
        prod *= arr[i];
    return prod;
}

int lastPositive(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > 0)
            return arr[i];
    }
    return 0;
}

void doubleEven(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            arr[i] *= 2;
    }
}

int uniqueArray(int arr[], int n, int unique[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            unique[k++] = arr[i];
    }
    return k;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int longestSequence(int arr[], int n) {
    int maxLen = 1, currLen = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currLen++;
            if (currLen > maxLen)
                maxLen = currLen;
        } else {
            currLen = 1;
        }
    }
    return maxLen;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[N];
    int unique[N];

    srand(time(NULL));

    for (int i = 0; i < N; i++)
        arr[i] = rand() % 10 - 5;

    printf("Initial array:\n");
    printArray(arr, N);

    printf("Product of elements: %d\n", product(arr, N));
    printf("Last positive element: %d\n", lastPositive(arr, N));

    doubleEven(arr, N);
    printf("After doubling even elements:\n");
    printArray(arr, N);

    int size = uniqueArray(arr, N, unique);
    bubbleSort(unique, size);
    printf("Sorted unique elements:\n");
    printArray(unique, size);

    printf("Longest sequence of identical elements: %d\n",
           longestSequence(arr, N));

    return 0;
}
