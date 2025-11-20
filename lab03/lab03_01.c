#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 0.0;
    double a, b, c, d, e, E;
    printf("x = ");
    scanf("%lf", &x); 
    a = x*x - 9;
    b = x - 3;
    c = 2*x + 1;
    d = x + 4;
    e = 5 - x;
    E = a/b + (c*e)/d;
    printf("E(%.3f) = %.8f\n", x, E);
    return 0;
}

