#include <stdio.h>

void printRow(int spaces, int insideSpaces) {
    for (int i = 0; i < spaces; i++)
        printf(" ");

    printf("@");

    if (insideSpaces > 0) {
        for (int i = 0; i < insideSpaces; i++)
            printf(" ");
        printf("@");
    }

    printf("\n");
}

void drawDiamond(int n, int row) {
    if (row > 2 * n - 1)
        return;

    int spaces, insideSpaces;

    if (row <= n) {
        spaces = n - row;
        insideSpaces = 2 * row - 3;
    } else {
        spaces = row - n;
        insideSpaces = 2 * (2 * n - row) - 3;
    }

    printRow(spaces, insideSpaces);
    drawDiamond(n, row + 1); 
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    drawDiamond(n, 1);

    return 0;
}
