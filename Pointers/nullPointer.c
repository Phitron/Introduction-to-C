#include <stdio.h>

int main()
{
    int *ptr;
    
    char str[] = "Hello";

    char *first = str;

    char * c = strchr(str, 'l');
    printf("%d", c - first);

    return 0;
}