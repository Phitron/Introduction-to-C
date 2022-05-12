#include <stdio.h>

int main()
{
    char name[100];
    scanf("%s", name); //for single word
    gets(name); // for more than one word
    fgets(name, 100, stdin); //for avoiding buffer overflow
    // fgets(array, arraySize, file)
    // stdin: standard input
    // buffer overflow is getting more input than the defined array size.

    char arr[5] = "Hello";

    printf("%c", arr[4]);

    return 0;
}