#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Hello";
    char b[] = "World";

    int len = strlen(a) + strlen(b);

    char c[len + 2];

    strcat(c, a);
    strcat(c, " ");
    strcat(c, b);

    printf("%s", c); 

    return 0;
}