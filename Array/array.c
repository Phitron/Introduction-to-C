#include <stdio.h>

int main()
{
    int marks[3]; //array index starts from 0

    for(int i = 0; i < 3; i++){
        printf("Enter Student %d Mark: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("Student %d  got %d marks.\n", i + 1, marks[i]);
    }


    double values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};



    return 0;
}