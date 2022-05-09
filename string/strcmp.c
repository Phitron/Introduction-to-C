#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";

    int cmp = strcmp(str1, str2);

    if(cmp < 0){
        printf("%s", str1);
    }
    else if(cmp > 0){
        printf("%s", str2);
    }
    else {
        printf("Both are equal");
    }

    return 0;
}