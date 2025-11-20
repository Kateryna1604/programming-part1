#include <stdio.h>

int main(void) {
    int y;
    printf("Enter a year: ");
    scanf("%d" , &y);
    /*
    if(y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
        puts("leap");
     }
     else{
        puts("not leap");
     }
   */
   printf((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) 
      ? " %d is leap\n" 
      : " %d is not leap\n",
      y); 

      return 0;
}


