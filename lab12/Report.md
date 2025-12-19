# Report12

## Report12_01
Variant number: 17

### Sourse code:
[text](task1.c)

### Result:
a = "Hello!"
b = "Good morning, world"
a (empty) = ""


### Debug session:
root@LAPTOP-R1MQP4P8:~/programming-part1/lab12# gcc task1.c -o lab12
root@LAPTOP-R1MQP4P8:~/programming-part1/lab12# ./lab12
a = "Hello!"
b = "Good morning, world"
a (empty) = ""




## Report12_02
Variant number: 17

### Sourse code:
[text](task2.c)

### Result:
#### input:
#include <stdlib.h>

int main() {
    int *a = (int*)malloc(20);
    int n = 15;
    int x = 100;
    return 0;
}

#### output:
#include <stdlib.h>

int main() {
    int *a = (int*)calloc(0x1, 0x14);
    int n = 0xF;
    int x = 0x64;
    return 0x0;
}




