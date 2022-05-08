#include <stdio.h>

int main()
{
    long long n, b, c;

    while(scanf("%lld", &n) != EOF)
    {
        long long lcm = 1;
        long long inter;

        for(long long i = 0; i < n; i++)
        {   
            //finding out lcm of the elements one at a time
            //lcm = a * b/gcd(a, b)
            scanf("%lld", &b);
            
            inter = lcm * b;

            //finding the gcd
            long long x, y;
            x = lcm;
            y = b;

            while(y != 0){
                long long rem = x % y;
                x = y;
                y = rem;
            }

            //finding the lcm
            lcm = inter/x;
        }

        printf("%lld\n", lcm);
    }

    

    return 0;
}