#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 0;
    double b = 3;
    int n;
    printf("enter n: ");
    if(scanf("%d", &n) != 1 || n <= 2){
        printf("invalid input");
        return 1;
    }
    double h = (b - a) / (n - 1);
    int i = 0;
    double x = a;

    do{
        double y = exp(-x) * sin(2 * x) + log(1 + x * x);
        printf("%10.5f %12.5f\n", x, y);

        i++;
        x = a + i * h;

    } while(i < n);

    return 0;
}