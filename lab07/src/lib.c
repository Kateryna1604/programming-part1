#include "lib.h"

// Func. 1: 17 -> x * (sin(y) - sqrt(z)) + exp(w)
double func1(double x, double y, double z, double w, double v) {
    return x * (sin(y) - sqrt(z)) + exp(w);
}

// Func. 2: 1 -> sin(x) + cos(y)
double func2(double x, double y, double z, double w, double v) {
   // return sin(x) + cos(y);
   return sin(x) + cos(y) +  sqrt(z) + exp(w) + tan(v);
}

// Func. 3: 6 -> (exp(x) + y^2 - z) * tan(w) / sqrt(v + 1)
double func3(double x, double y, double z, double w, double v) {
    return (exp(x) + y*y - z) * tan(w) / sqrt(v + 1);
}

// Func. 4: 11 -> x + ln(y + 1) - sqrt(z) * cos(w)
double func4(double x, double y, double z, double w, double v) {
    return x + log(y + 1) - sqrt(z) * cos(w);
}