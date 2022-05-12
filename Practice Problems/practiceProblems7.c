#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void solveA();
void solveB();
void solveC();
void solveD();
void solveE();
void solveF();
void solveG();
void solveH();
void solveI();

int main()
{ 
    solveI();
    return 0;
}

void solveA()
{
    int n;
    scanf("%d", &n);

    int ans[n];

    for(int i = 1; i <= n; i++)
    {
        int p;
        scanf("%d", &p);

        ans[p - 1] = i;
    }


    for(int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
}


void solveB()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);


        int arr[n];

        for(int i = 0; i < n; i++){
            int a;
            scanf("%d", &a);

            arr[i] = a;
        
        }

        int found = 0;

        for(int i = 1; i < n - 1; i++)
        {
            if(arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                printf("%d\n", i + 1);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            if (arr[0] != arr[1]){
                printf("%d\n", 1);
            }
            else {
                printf("%d\n", n);
            }
        }
        

    }
}


void solveC()


{
    int n, k;
    scanf("%d %d", &n, &k);

    int participants[n];
    int advanced = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &participants[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        if (participants[i] >= participants[k - 1] && participants[i] > 0)
        {
            advanced++;
        }
    }

    printf("%d", advanced);
}


void solveD()
{
    char s[11];
    char t[11];

    scanf("%s", s);
    scanf("%s", t);

    if(strcmp(s, t) < 0)
    {
        printf("Yes");
    }
    else {
        printf("No");
    }
}


void solveE()
{
    char s[16];
    scanf("%s", s);

    if(strcmp(s, "Hello,World!") == 0)    
    {
        printf("AC");
    }
    else {
        printf("WA");
    }
}


void solveF()
{
    long long n;
    scanf("%lld", &n);

    for(long long i = 0; i <= n; i++){
        long long power = 0; //pow(2, i);

        if(power > n)
        {
            printf("%lld", i - 1);
            break;
        }
    }
}


void solveG()
{
    char s1[10000];
    char s2[10000];

    scanf("%s", s1);
    scanf("%s", s2);

    for(int i = 0; i < strlen(s1); i++)
    {
        s1[i] = s1[i]; //tolower(s1[i]);
        s2[i] = s2[i]; //tolower(s2[i]);
    }

    int compare = strcmp(s1, s2);

    if(compare < 0)
    {
        printf("%d", -1);
    }
    else if(compare > 0)
    {
        printf("%d", 1);
    }
    else {
        printf("%d", 0);
    }
}


void solveH()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int n;
        char str[n + 1];

        scanf("%d", &n);
        scanf("%s", str);

        bool suspicious = false;

        for(int i = 0; i < strlen(str); i++)
        {
            for(int j = 1; j < strlen(str); j++)
            {
                if(str[i] == str[j] && j - i == 1)
                {
                    i += 1;
                }
                else if(str[i] == str[j] && j - i > 1){
                    suspicious = true;
                }
            }  
        }

        if(suspicious == true) 
        {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
}


void solveI()
{
    int t;
    scanf("%d", &t);

    char s[101];
    char n[101];

    for(int i = 0; i < t; i++) 
    { 
        int idx = 0;

        scanf("%s", s);

        for(int i = 0; i < strlen(s) - 1; i++)
        {
            if(i == 0)
            {
                n[idx] += s[i];
                idx++;
            }
            
            else if(s[i] == s[i - 1])
            {
                n[idx] += s[i];
                idx++;
            }
        }

        n[idx] = s[strlen(s) - 1];

        printf("%s\n", n);

    }

}