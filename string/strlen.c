#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Hello World";

    //manually finding out length
    int i = 0;
    while(str[i] != '\0') 
    {
        i++;
    }

    printf("String Length: %d\n", i);

    //finding out length with module
    int len = strlen(str);
    printf("Length = %d\n", len);

    return 0;
}