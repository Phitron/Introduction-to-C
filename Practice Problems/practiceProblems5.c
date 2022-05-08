#include <stdio.h>

int main()
{
    //problem 1: series sum
    //i

    int sum = 0;

    for(int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    printf("1-100 series sum: %d\n", sum);

    //ii
    sum = 0;

    for(int i = 1; i < 30; i++)
    {
        sum += i;
    }

    printf("1-29 series sum: %d\n", sum);

    //iii
    sum = 0;
    int start = 50;

    for(int i = 0; i < 20; i++)
    {
        sum += start;
        start--;
    }

    printf("series sum of 50 to first 20 number: %d\n", sum);

    //iv
    sum = 0;

    for(int i = 0, j = 2; i < 10; i++, j+=3)
    {

        sum += j;
    }

    printf("series sum of 2 to first 10 number: %d\n", sum);

    //v
    sum = 0;
    int i = 100;

    while(i > 0)
    {
        sum += i;
        i -= 3;
    }

    printf("series sum of 100-0: %d\n", sum);

    //problem 2: patterns
    //i
    for(int i = 1; i <= 4; i++){
        for(int j = 0; j < i; j++){
            printf("%d", i);
        }
        printf("\n");
    }

    //ii
    for(int i = 1; i <= 4; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    //iii
    int k = 1;
    for(int i = 1; i <= 4; i++){
        for(int j = 0; j < i; j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    //problem 3: series with continue
    //a
    sum = 0;

    for(int i = 1; i < 100; i+= 2){
        sum += i;
    }

    printf("sum of 1-100 all odd numbers %d\n", sum);

    //b
    sum = 0;

    i = 1;
    
    while(i <= 100){
        if(i % 3 != 0){
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    //c
    sum = 0;
    i = 1;

    while(i <= 60){
        if(60 % i != 0){
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    //problem 3: valid input
    int a;
    do{
        printf("Enter 0\\1: ");
        scanf("%d", &a);


        if(a != 0 && a != 1){
            printf("Wrong answer. Try again.\n");
        }

    } while(a != 0 && a != 1);

    printf("You entered %d.\n", a);

    return 0;
}