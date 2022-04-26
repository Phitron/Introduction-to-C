#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    //storing all the values in an array
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }

    //finding gcd of first two elements of the array
    int a = arr[0];
    int b = arr[1];

    while (a != 0){
        int rem = b % a;
        b = a;
        a = rem;
    }

    int gcd = b;


    //finding gcd of the remaining elements of the array
    for(int i = n - 1; i < n - 2; n--){
            
            while(i != 0)
            {
                int rem = gcd % i;
                gcd = i;
                i = rem;
            }
    }

    printf("%d", gcd);

    return 0;
}