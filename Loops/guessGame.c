#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int numberOfGuesses = 0;

    while(numberOfGuesses < 10){
        int guess;
        scanf("%d", &guess);
        numberOfGuesses++;

        if(guess == number)
        {
            printf("You got the number!!!\n");
            break;
        }

        else if(guess < number)
        {
            printf("The number is greater than %d\n", guess);
        }

        else
        {
            printf("The number is smaller than %d\n", guess);
        }
        
    }

    if(numberOfGuesses == 10){
        printf("You failed");
    }

    return 0;
}