#include <stdio.h>

/*
Why do we use function
- to not repeat the same code again and again
- to debug easily
- to make code modular
*/

/*
return types-

void - returns nothing
int - returns int
char - returns char
double - returns double

*/


void giveCoffee();
void bottlesOfBeer(int bottles);
void makeCoffee(int cup);

int main()
{
   int cup;
   scanf("%d", &cup);
   makeCoffee(cup);
}

//function without parameter
void giveCoffee()
{
    printf("Here is your cup of coffee ☕");
}


//function with parameter
void bottlesOfBeer(int bottles)
{
    for(int i = bottles; i > 0; i--)
    {
        printf("%d bottles of 🍺 on the wall.\n", i);
        printf("%d bottles of beer!\n", i);
        printf("Take one down\nPass it around\n");
    }
}


void makeCoffee(int cup)
{
    printf("Adding %d cup of 🥛\n", cup);
    printf("Adding %d spoon of 🌰\n", cup);
    printf("Adding %d spoon of ◻️\n", cup);
    printf("Stirring it well\n");
    printf("Your ☕ is ready\n");
}


