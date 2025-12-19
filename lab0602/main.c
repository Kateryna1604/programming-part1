#include <stdio.h>
#include "include/user_macros.h"

int main(void)
{
    double y, dy;

    double a = 1.0;
    double b = -2.0;
    double c = 3.0;
    double d = -4.0;
    double x = 2.0;

    POLY3(y, a, b, c, d, x);
    DOLY3(dy, a, b, c, d, x);

    printf("POLY3(x) = %.6f\n", y);
    printf("DOLY3(x) = %.6f\n", dy);

    return 0;
}