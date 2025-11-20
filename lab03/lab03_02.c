#include <stdio.h>
#include <math.h>


int main(void) {
    double x, E;

printf("Enter x: ");
scanf("%lf", &x);

double a = sin(0.3*x);
double b = cos(0.7*x);
double c = log(x + 3);
double d = exp(-x);
double e = x;

E = a/b + (c * d) / e;
printf("E(%.3f) = %.8f\n", x, E);
return 0;


}