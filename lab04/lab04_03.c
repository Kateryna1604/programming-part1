#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    double x;
    double y;
    const double x0_big = 0;
    const double y0_big = 0;
    const double x0_small = 1;
    const double y0_small = 0;
    
    const double EPS = 1e-9;
    const double R_big = 1.5;
    const double R_small = 1;

    
    
    
    printf("Enter x and y: ");
    if (scanf("%lf%lf", &x, &y) != 2 ){
        printf("Invalid inputs");
        return 1;
    };
    
    const double distance_big = pow(x - x0_big, 2) + pow(y - y0_big, 2);
    const double distance_small = pow(x - x0_small, 2) + pow(y - y0_small, 2);
    
    bool inside_big = distance_big <= R_big * R_big + EPS;
    bool inside_small = distance_small <= R_small * R_small + EPS;

    if(inside_big && inside_small){
        printf("YES");
    } else {
        printf("NO");
    }


 return 0;

}