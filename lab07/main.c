#include <stdio.h>
#include "lib.h"

int main() {
    double x = 2, y = 1, z = 3, w = 0.5, v = 4;

    printf("func1 = %f\n", func1(x,y,z,w,v));
    printf("func2 = %f\n", func2(x,y,z,w,v));
    printf("func3 = %f\n", func3(x,y,z,w,v));
    printf("func4 = %f\n", func4(x,y,z,w,v));

    return 0;
}