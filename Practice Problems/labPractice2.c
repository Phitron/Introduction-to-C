#include <stdio.h>
#include <math.h>

int main()
{   
    //problem 1.1: find if the number is prime
    int a;
    scanf("%d", &a);

    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            printf("No");
            return 0;
        }
    }
    printf("Yes\n");

    //problem 1.2: print all the number between 100-200 that are prime
    int i = 100;
    int isPrime = 0;

    while (i <= 200){
        for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    isPrime = 1;
                    break;  
                }
            }
        if (isPrime == 0){
            printf("%d ", i);
        }
        else {
            isPrime = 0;
        }
        i++;
    }


    //problem 2: reverse digits
    int num;
    scanf("%d", &num);

    int reverse = 0;

    while(num > 0){
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("Reversed: %d\n", reverse);


    //problem 3: factorial
    
    int m;
    scanf("%d", &m);

    int factorial = 1;

    for(int i = 1; i <= m; i++){
        factorial = factorial * i;
    }

    printf("Factorial: %d\n", factorial);


    //problem 4: sum of digits of a number
    int number;
    scanf("%d", &number);

    int sum = 0;

    while(number > 0){
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
