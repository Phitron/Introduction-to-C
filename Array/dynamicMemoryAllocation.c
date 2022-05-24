#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter no of students: ");
    scanf("%d", &n);

    int *a = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Total marks: %d", sum);
}