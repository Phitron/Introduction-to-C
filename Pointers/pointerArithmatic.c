#include <stdio.h>

int main()
{
    char ch = 'a';
    char *pCh = &ch;

    printf("%lld -> %c\n", pCh, *pCh);

    pCh++;
    printf("%lld\n", pCh, *pCh);


    int num = 100;
    int *pNum = &num;

    printf("%lld -> %d\n", pNum, *pNum);

    pNum++;
    printf("pNum++ -> %lld\n", pNum);

    /*
        ? char takes 1 byte
        ? int takes 4 bytes
        ? double and long long takes 8 bytes
    */

    int a, b;

    int *pA = &a;
    int *pB = &b;

    printf("pA = %lld, pb = %lld\n", pA, pB);
    printf("Difference = %d", pB - pA);

    return 0;
}