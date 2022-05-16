#include <stdio.h>

int main()
{
    //pointer represents the address (byte) where the variable is stored

    /* why do we need pointers-
        - to change the value in the address
        - to change the actual value of a variable passed in a function
    */

    int price;
    int temp;
    int age;

    // & -> address operator
    printf("%p\n", &price); //hexadecimal value
    printf("%lld", &price);

    return 0;
}