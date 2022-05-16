#include <stdio.h>

int main()
{

    int val = 50;

    //? declaring pointer
    int* pVal = &val; //? type* for declaring | &variable for address (value)

    printf("%p has value %d\n", pVal, *pVal); //? *pointer for getting the value at the address

    val = 100;

    printf("%p has value %d\n", pVal, *pVal); 


    //? 🤯 if you change the value of pointer 
    //? the value of variable will also be changed

    *pVal = 200;

    printf("%p has value %d\n", pVal, *pVal);
    printf("val = %d\n", val);

    int v = 500;
    printf("%d", *&v);

    /*
        ? * -> address -> value
        ? & -> value -> address
    */    

    return 0;
}