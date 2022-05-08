#include <stdio.h>

int main()
{
    int money = 0;
    int target = 100;

    while (money < target){
        printf("Need more money. Enter amount: ");
        int given;
        scanf("%d", &given);
        money += given;
        printf("Current Money = %d\n", money);
    }

    int x;
    scanf("%d", &x);

    int reversed = 0;
    
    while(x > 0){
        int digit = x % 10;
        x/= 10;
        reversed = reversed * 10 + digit;
    }

    printf("Reversed Number: %d", reversed);

    return 0;
}