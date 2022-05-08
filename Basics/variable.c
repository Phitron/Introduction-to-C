#include <stdio.h>

int main(){
    //declaration
    //typeOfValue name;
    int price; //int for integer value
    int marks;
    float temp; //float for decimal value

    //variable assignment
    price = 20;
    printf("%d\n", price); //output: 20

    //variable value changing
    price = 30;
    
    /*compiler reads the code from top to bottom 
    so the price value will be 30 now */

    //printing variable
    //%d is used as a placeholder for int value
    printf("%d\n", price); //output: 30

    marks = 90;
    printf("%d\n", marks); //output: 90

    price = marks - 10; //value: 80

    //declaring variable and assigning value
    int price2 = 20 + 30;

    return 0;
}