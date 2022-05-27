#include <stdio.h>

//problem 1
int findRectangleArea(int length, int breadth);

//problem 2
int findMax(int n, int arr[]);

//problem 3
int swap(int *a, int *b);
int rotateArray(int n, int arr[]);

//problem 4
int rotateByK(int n, int k, int arr[]);

//problem 6
char truncateStr(char str[], int pos);

//problem 7
void findPtrValues();

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    printf("Area of Rectangle: %d\n", findRectangleArea(6, 4));
    printf("Max: %d\n", findMax(sizeof(a)/sizeof(a[0]), a));

    // rotateArray(sizeof(a)/sizeof(a[0]), a);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    rotateByK(sizeof(a)/sizeof(a[0]), 3, a);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    char str[] = "abcd";

    truncateStr(str, 2);
    printf("%s\n", str);

    findPtrValues(); 
}


int findRectangleArea(int length, int breadth)
{
    int area = length * breadth;

    return area;
}


int findMax(int n, int arr[])
{
    int max = arr[0];

    for(int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}


int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int rotateArray(int n, int arr[])
{
    for(int i = 0; i < n - 1; i++)
    {
        swap(&arr[i], &arr[i + 1]);
    }
}


int rotateByK(int n, int k, int arr[])
{
    k = k % n;

    int res[n];

    int idx = 0;

    for(int i = k; i < n; i++)
    {
        res[idx] = arr[i];
        idx++;
    }

    for(int i = 0; i < k; i++)
    {
        res[idx] = arr[i];
        idx++;
    }

    for(int i = 0; i < n; i++)
    {
        arr[i] = res[i];
    }

}


char truncateStr(char str[], int pos)
{
    str[pos] = '\0';
}


void findPtrValues()
{
    int a = 10;
    double b = 32.2;
    char c = 'c';

    int *pa = &a;
    double *pb = &b;
    char *pc = &c;

    printf("int: %lld  double: %lld  char: %lld\n", pa, pb, pc);
    
    pa++;
    pb++;
    pc++;

    printf("int: %lld  double: %lld  char: %lld\n", pa, pb, pc);
}