#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);

    int substraction = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, substraction);

    int product = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, product);

    int division = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, division);

    int remainder = num1 % num2;
    printf("%d %% %d = %d", num1, num2, remainder);

    return 0;
}