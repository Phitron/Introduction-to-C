#include <stdio.h>

int main(){
    int number = 20;
    double realNumber = number; //implicit conversion

    int number1 = 20, number2 = 8;
    double division = (double) number1/ (double) number2; //explicit conversion

    printf("%lf", division);

    return 0;
}