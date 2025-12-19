#include <stdio.h>

char* my_strcpy(char *dest, const char *src)
{
    char *start = dest;
    while ((*dest++ = *src++) != '\0') {

    }
    return start;
}

int main(void)
{
    char a[100];
    char b[100];

    my_strcpy(a, "Hello!");
    my_strcpy(b, "Good morning, world");

    printf("a = \"%s\"\n", a);
    printf("b = \"%s\"\n", b);

    my_strcpy(a, "");
    printf("a (empty) = \"%s\"\n", a);

    return 0;
}