#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <inttypes.h>   

int main() {

    int v;
    printf("To check Integer program press: 1\nTo check Floating-point program press: 2\n");
    if (scanf("%d", &v) != 1) {
        printf("invalid input!\n");
        return 1;
    }

    if (v == 1) {

        int q;
        int64_t x;
        int64_t result = 1;

        printf("Enter q and x: ");

        if (scanf("%d%" SCNd64, &q, &x) != 2 || q <= 0) {
            printf("invalid input!\n");
            return 1;
        }

        for (int k = 1; k <= q; k++) {

            int64_t inside_result = 1 + k * x;

            if (inside_result < 0) {
                printf("NaN\n");
                return 2;
            }

            double root_result = sqrt((double) inside_result);
            int64_t root_int = (int64_t) root_result;

            if (root_int == 0) {     
                printf("NaN\n");
                return 3;
            }

            if (result > INT64_MAX / root_int) {  
                printf("NaN\n");
                return 3;
            }

            result *= root_int;
        }

        printf("the result is: %" PRId64 "\n", result);
        return 0;
    }

    int q;
    int k = 1;
    long double x;
    long double result2 = 1;

    printf("Enter q and x: ");
        
        if(scanf("%d%Lf", &q, &x) !=2 || q <= 0) {
            printf("invalid input!");
            return 1;
        }

        while (k <= q) {
        long double inside_result = 1 + k * x;
            
            if(inside_result < 0) {
                printf("NaN\n");
                return 2;
        }

        long double root_result = sqrtl(inside_result);

        result2 *= root_result;
        k++;
    }
    printf("the result is: %Lf\n", result2);
    return 0;
}

