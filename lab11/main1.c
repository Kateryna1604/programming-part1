#include <stdio.h>

int countOddDigits(int n) {
    if (n == 0)
        return 0;

    int digit = n % 10;

    if (digit % 2 != 0)
        return 1 + countOddDigits(n / 10);
    else
        return countOddDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of odd digits: %d\n", countOddDigits(n));

    return 0;
}
