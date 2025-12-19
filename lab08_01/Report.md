# Report08

## Report08_01
Variant number: 17

### Sourse code:
[text](main.c)

### Result:
Initial matrix:
   9   9   0   7
   0   0   2   8
   6   4   0   5
   4   6   3   6

Product of secondary diagonal: 224
Range (max - min): 9
Mode of matrix: 0

Matrix after 180 degree rotation:
   6   3   6   4
   5   0   4   6
   8   2   0   0
   7   0   9   9


### Debug session:
root@LAPTOP-R1MQP4P8:~/programming-part1# cd ./lab08_01
root@LAPTOP-R1MQP4P8:~/programming-part1/lab08_01# ^C
root@LAPTOP-R1MQP4P8:~/programming-part1/lab08_01# gcc main.c -o lab08_01
root@LAPTOP-R1MQP4P8:~/programming-part1/lab08_01# ./lab08_01
Initial matrix:
   9   9   0   7
   0   0   2   8
   6   4   0   5
   4   6   3   6

Product of secondary diagonal: 224
Range (max - min): 9
Mode of matrix: 0

Matrix after 180 degree rotation:
   6   3   6   4
   5   0   4   6
   8   2   0   0
   7   0   9   9


## Report08_02
Variant number: 17

### Sourse code:
[text](../lab08_02/main.c)

### Result:
Initial array:
-2 4 -3 -2 3 3 -1 3 -5 4 
Product of elements: -25920
Last positive element: 4
After doubling even elements:
-4 8 -3 -4 3 3 -1 3 -5 8 
Sorted unique elements:
-5 -4 -3 -1 3 8 
Longest sequence of identical elements: 2


### Debug session:
root@LAPTOP-R1MQP4P8:~/programming-part1# cd ./lab08_02
root@LAPTOP-R1MQP4P8:~/programming-part1/lab08_02# gcc main.c -o lab08_02
root@LAPTOP-R1MQP4P8:~/programming-part1/lab08_02# ^C
root@LAPTOP-R1MQP4P8:~/programming-part1/lab08_02# ./lab08_02
Initial array:
-2 4 -3 -2 3 3 -1 3 -5 4 
Product of elements: -25920
Last positive element: 4
After doubling even elements:
-4 8 -3 -4 3 3 -1 3 -5 8 
Sorted unique elements:
-5 -4 -3 -1 3 8 
Longest sequence of identical elements: 2