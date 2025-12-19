#include <stdio.h>
#include "user_funcs.h"

int main(void)
{
    double a, b, c, d, x;

    printf("Enter a, b, c, d, x: ");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &x);

    double value = poly3(a, b, c, d, x);
    double deriv = dpoly3(a, b, c, d, x);

    printf("poly3(x)  = %.6f\n", value);
    printf("dpoly3(x) = %.6f\n", deriv);

    return 0;
}