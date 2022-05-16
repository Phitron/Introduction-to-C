#include <stdio.h>

int main()
{
    const int N = 10;

    //the value cant be changed
    const int * pN = &N;

    //the address cant be changed 
    int* const pN = &N;
    
    //the address and value cant be changed
    const int * const pN = &N;

    printf("%d\n", N);

    return 0;
}