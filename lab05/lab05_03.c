#include <stdio.h>
#include <ctype.h>

int main(void) {

    unsigned long long n = 0;
    unsigned long long v = 0;
    unsigned long long p = 1;
    int ch;

    printf("Enter a number in base 8: ");
    v = 0;

    while((ch = getchar()) != '\n' && ch != EOF)
    {
        if (ch >= '0' && ch <= '7')
        {
            v = v * 8 + (ch - '0');
        }
    }

    printf("Number in base 4: ");

    if (v == 0)
    {
        putchar('0');
    }
    else
    {
        p = 1;
        while (p <= v / 4)
        {
            p *= 4;
        }

        while (p > 0)
        {
            unsigned d = (unsigned)(v / p);
            putchar('0' + d);
            v %= p;
            p /= 4;
        }
    }
    putchar('\n');

    printf("Enter a number in base 4: ");
    v = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (ch >= '0' && ch <= '3')
        {
            v = v * 4 + (ch - '0');
        }
    }

    printf("Number in base 8: ");

    if (v == 0)
    {
        putchar('0');
    }
    else
    {
        p = 1;
        while (p <= v / 8)
        {
            p *= 8;
        }

        while (p > 0)
        {
            unsigned d = (unsigned)(v / p);
            putchar('0' + d);
            v %= p;
            p /= 8;
        }
    }
    putchar('\n');

    return 0;
}

