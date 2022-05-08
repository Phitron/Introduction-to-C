#include <stdio.h>

int main()
{
    int values[10];

    printf("%d", sizeof(values)); //output: 40
    //one variable takes 4 bytes
    printf("%d", sizeof(values)/sizeof(values[0])); //output: 10

    return 0;
}