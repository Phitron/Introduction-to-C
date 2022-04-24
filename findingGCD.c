#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);


    while (a != 0){
        int remainder = b % a;
        b = a;
        a = remainder;
    }

    printf("GCD is %d", b);

    return 0;
}