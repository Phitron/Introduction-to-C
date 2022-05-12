#include <stdio.h>

int main()
{
    int arr[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int curr = 0;
    for(int i = 0; i < 3; i++){
        curr = arr[curr];
    } 

    printf("%d", curr);

    return 0;
}