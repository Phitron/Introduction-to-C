#include <stdio.h>
#include <string.h>

void problem3();
void problem4();
void problem5();
void problem10();
void problem9();
void problem8();
void problem7();
void problem6();

int main()
{
    problem7();    
    return 0;

}


int problem1(){
    int n;
    scanf("%d", &n);

    int arr[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}


int problem2(){
    int n;
    scanf("%d", &n);

    int max_candidate[n];

    int max = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &max_candidate[i]);
        
        if (max_candidate[i] > max){
            max = max_candidate[i];
        }
    }

    int count = 0;

    for(int i = 0; i < n; i++){
        if (max_candidate[i] == max){
            count++;
        }
    }

    printf("Maximum is %d\nMaximum occurs %d times", max, count);

    return 0;
}


void problem3()
{
    int n;
    scanf("%d", &n);

    int max_candidate[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &max_candidate[i]);
    }

    int max = max_candidate[0];
    int max_two = max_candidate[0];

    for(int i = 0; i < n; i++)
    {
        int curr = max_candidate[i];

        if (curr > max){
            max = curr;
        }
        
        else if (curr > max_two && curr < max){
            max_two = curr;
        }
    }

    printf("Second largest = %d", max_two);

}


void problem4()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    printf("Input array element: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int elem;
    printf("Input element to insert: ");
    scanf("%d", &elem);

    int pos;
    printf("Position to insert: ");
    scanf("%d", &pos);

    int temp = -1;
    
    for(int i = 0; i < n; i++)
    {
        if (i == pos - 1)
        {
            temp = arr[i];
            arr[i] = elem;
        }

        else if(temp != -1)
        {
            int temp_temp = arr[i];
            arr[i] = temp;
            temp = temp_temp;
        }
    }

    arr[n] = temp;


    printf("Elements of array are: ");
    for(int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}


void problem5()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    printf("Input elements: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    int count[n];
    int index = 0;

    for(int i = 0; i < n; i++){
        int curr = arr[i];
        int isdup = 0;

        for(int j = 0; j < index; j++) 
        {
            printf("%d th value of arr is: %d\n", i, curr);
            printf("count[j] = %d\n", count[j]);
            if (curr == count[j]){
                count[j] += 1;
                isdup = 1;
            }
        }

        if(isdup == 0){
            count[index] = 1;
            index++;
        }
    }

    printf("There are %d distinct values", index);

    // for(int i = 0, j = 0; i < n, j < index; i++){
    //     printf("%d occurs %d times\n", arr[i], count[j]);
    // }

}


void problem10()
{
    int count = 0;
    char string[1000];

    printf("Input string: ");
    fgets(string, 1000, stdin); 

    char ch;
    printf("Input character to search: ");
    scanf("%c", &ch);

    int i = 0;

    while(string[i] != '\0'){
        if (string[i] == ch)
        {
            count++;
        }
        i++;
    }

    printf("Total occurernces of '%c': %d", ch, count);

}

void problem9()
{

    int n;
    scanf("%d", &n);

    char strings[n][100];
    int index = 0;

    for(int i = 0; i < n; i++){
        char a[100];
        scanf("%s", strings[i]);

        if(strcmp(strings[i], strings[index]) < 0){
            index = i;
        }

    }

    printf("Smallest: %s", strings[index]);
    
}

void problem8()
{
    char string[1000];

    fgets(string, 1000, stdin);

    char vowels[11] = "aeiouAEIOU";

    int countV = 0, countC = 0;

    for(int i = 0; i < strlen(string); i++)
    {
        if (strchr(vowels, string[i]) != NULL) 
        {
            countV++;
        }
        else {
            if (isalpha(string[i]))
            {
                countC++;
            }
        }
        
    }

    printf("Total Vowels = %d\n", countV);
    printf("Total Consonants = %d\n", countC);
}


void problem7(){
    char string[1000];

    fgets(string, 1000, stdin);
    
    char rev[1000];
    char rev_idx = 0;
    for(int i = strlen(string) - 1; i >= 0; i--)
    {
        rev[rev_idx] = string[i];
        rev_idx++;
    }

    printf("Reversed String %s", rev);
}