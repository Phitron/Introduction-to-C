#include <stdio.h>
#include <string.h>

int main()
{
    char s[10] = "ava";
    char helloWorld[] = "Hello World";

    printf("%c\n", helloWorld[strlen(helloWorld) - 1]);

    char r[100] = "ab"; 
    char b[100] = "cd";
    strcat(r, b);
    printf("%s", b);

    char a[100];
    scanf("%s", a);
    printf("%s", a);


    return 0;
}