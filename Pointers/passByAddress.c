#include <stdio.h>

void makeDouble(int * a)
{
    *a *= 2;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    makeDouble(&a);
    printf("a = %d\n", a);

    int x = 30, y = 40;
    swap(&x, &y);
    printf("x = %d  y = %d", x, y);
     
    return 0;
}