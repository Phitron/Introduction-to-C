#include <stdio.h>

void Q1();
void Q2();

int main()
{
    void Q2();
}

void Q1(){
    int n = 10; 
    int a[n], b[n]; 
    for (int i=0; i<n; i++) { 
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Q2(){
    char s[] = "banana";
    printf("%ld", sizeof(7));
}

void Q3()
{
    int arr[8] = {1, 4, 7, 10, 15, 18, 5, 10};

}

void Q5()
{
    char a[10]; 
    gets(a); 

}