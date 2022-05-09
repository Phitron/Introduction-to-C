#include <stdio.h>

int main()
{
    char str[] = "This is a string";
    //single quote for char
    //double quote for string

    printf("%ld", sizeof(str)/sizeof(str[0]));
    printf("%s", str);
    puts(str); //same as printf

    return 0;
}