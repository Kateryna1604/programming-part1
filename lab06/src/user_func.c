#include "user_funcs.h"

double poly3(double a, double b, double c, double d, double x)
{
    return a*x*x*x + b*x*x + c*x + d;
}

double dpoly3(double a, double b, double c, double d, double x)
{
    (void)d; 
    return 3*a*x*x + 2*b*x + c;
}