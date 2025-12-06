#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main (){
    int q;
    int64_t x;
    int64_t result = 1;


    printf("Enter q and x: ");
    
    if(scanf("%d%ld", &q, &x) !=2 ) {
        printf("invalid input!");
        return 1;
    }

    
    for(int k = 1; k <= q; k++ ){
        int64_t inside_result = 1 + k * x;
        

    }


}