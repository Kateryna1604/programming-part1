# Report06

## Report06
Variant number: 17
### Sourse code:
[text](main.c)

### Result:
Enter a, b, c, d, x: 7 3 8 4 2
poly3(x)  = 88.000000
dpoly3(x) = 104.000000


### Debug session:
root@LAPTOP-R1MQP4P8:~/programming-part1# cd ./lab06
root@LAPTOP-R1MQP4P8:~/programming-part1/lab06# make
./build/app
gcc -Wall -Wextra -O2 -std=c11 -Iinclude -MMD -MP -c src/user_func.c -o build/user_func.o
gcc -Wall -Wextra -O2 -std=c11 -Iinclude -MMD -MP -c main.c -o build/main.o
main.c: In function ‘main’:
main.c:9:5: warning: ignoring return value of ‘scanf’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
    9 |     scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &x);
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
gcc build/user_func.o build/main.o -o build/app -lm
Enter a, b, c, d, x: 7 3 8 4 2
poly3(x)  = 88.000000
dpoly3(x) = 104.000000



## Report0602
Variant number: 17

### Sourse code:
[text](../lab0602/main.c)

### Result:
POLY3(x) = 2.000000
DOLY3(x) = 7.000000

### Debug session:
root@LAPTOP-R1MQP4P8:~/programming-part1# cd ./lab0602
root@LAPTOP-R1MQP4P8:~/programming-part1/lab0602# make
./build/app
gcc -Wall -Wextra -O2 -std=c11 -Iinclude -MMD -MP -c src/user_funcs.c -o build/user_funcs.o
gcc -Wall -Wextra -O2 -std=c11 -Iinclude -MMD -MP -c main.c -o build/main.o
gcc build/user_funcs.o build/main.o -o build/app
POLY3(x) = 2.000000
DOLY3(x) = 7.000000
root@LAPTOP-R1MQP4P8:~/programming-part1/lab0602#


## Report0603
Variant number: 17

### Sourse code:
[text](../lab0603/main.c)

### Result:
for_range(1, 3, print_i):
1
2
3

for_range(2, 5, print_square):
2^2 = 4
3^2 = 9
4^2 = 16
5^2 = 25

Predicate idea (only even numbers):
even: 2
even: 4
even: 6

### Debug session:
root@LAPTOP-R1MQP4P8:~/programming-part1# cd ./lab0603
root@LAPTOP-R1MQP4P8:~/programming-part1/lab0603# make; ./build/app
make: Nothing to be done for 'all'.
for_range(1, 3, print_i):
1
2
3

for_range(2, 5, print_square):
2^2 = 4
3^2 = 9
4^2 = 16
5^2 = 25

Predicate idea (only even numbers):
even: 2
even: 4
even: 6

