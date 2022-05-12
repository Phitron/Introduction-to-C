#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count[6] = {0};

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        
        count[x]++;
    }

    int sum = 0;

    for(int i = 1; i <= 5; i++){
        sum += count[i] * i;
    }

    printf("Average Review: %lf", (double) sum / (double) n);

    return 0;
}