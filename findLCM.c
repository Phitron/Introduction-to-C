#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);

    long long int arr[N];

    for (long long int i = 0; i < N; i++)
    {
        long long int a;
        scanf("%lld", &a);
        arr[i] = a;
    }

    long long int max = (arr[0] > arr[1]) ? arr[0] : arr[1];

    long long int lcm = 1;

    while (1)
    {
        if (max % arr[0] == 0 && max % arr[1] == 0)
        {
            lcm = max;
            break;
        }
        ++max;
    }

    for (long long int i = N - 1; i > N - 2; i--)
    {
        long long int current = arr[i];
        max = (lcm > current) ? lcm : current;

        while (1)
        {
            if (max % lcm == 0 && max % current == 0)
            {
                lcm = max;
                break;
            }
            ++max;
        }
    }

    printf("%lld", lcm);

    return 0;
}