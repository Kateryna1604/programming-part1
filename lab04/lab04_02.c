#include <stdio.h>
#include <math.h>

int main(void){
    int mode;
    double A; 
    double P; 
    double r; 
    double t; 
    double n; 


printf("choose the option:\n Simple - press: 1; Compound - press: 2\n ");
if (scanf("%d", &mode) != 1) {
    puts("Error: invalid input");
    return 1;
}
switch(mode){
    case 1:
        printf("enter principal: ");
        scanf("%lf", &P);

        printf("enter annual rate: ");
        scanf("%lf", &r);
        
        printf("enter years: ");
        scanf("%lf", &t);

        A = P * (1 + r * t);
        printf("result: %lf ", A);
        break;

    case 2:
        printf("enter principal: ");
        scanf("%lf", &P);

        printf("enter annual rate: ");
        scanf("%lf", &r);
        
        printf("enter years: ");
        scanf("%lf", &t);

        printf("enter compounds per year: ");
        scanf("%lf", &n);

        A = P * pow(1 + r / t, n * t);
        printf("result: %lf ", A);
        break;

    default:
        puts("Error: enter 1 or 2");
        return 2;
}
return 0;
}