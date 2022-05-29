#include <stdio.h>

struct Date 
{
    int day;
    int month;
    int year;
}; //remember the semicolon

int main()
{
   //declaration and assignment
   struct Date today = {6, 8, 2006};             

    //update one field
    today.year -= 1;

    //update the whole struct
    today = (struct Date) {8, 10, 2006};


    //printing date of a whole year
    struct Date startDate = {1, 1, 2021};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 0; i < 365; i++)
    {
        printf(
            "%d-%d-%d\n", startDate.day, startDate.month, startDate.year
        );

        if(startDate.day == daysInMonth[startDate.month - 1])
        {
            startDate.day = 1;
            startDate.month++;
        }
        else {
            startDate.day++;
        }
    }
        
}