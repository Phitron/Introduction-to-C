#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    do{
        n++;
        printf("%d\n", n);
    } while (n < 10);
    
    return 0;
}