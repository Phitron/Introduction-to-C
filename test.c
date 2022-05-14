#include <stdio.h>



int main()
{
    int n, d;
    scanf("%d %d", &n, &d);

    int arr[n];

    int i = (d == n - 1) ? d : d + 1;

    while(i < n){
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;

    while(i <= d)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}