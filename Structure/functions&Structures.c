#include <stdio.h>
#include <stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

//take struct input just like other types
bool isFirstDayOfYear(struct Date date)
{
    if(date.day == 1 && date.month == 1)
    {
        return true;
    }
    else {
        return false;
    }
}

struct Date getFirstDay(int year)
{
    struct Date firstDay = {1, 1, year};

    //return struct like other primitive types;
    return firstDay; 
}

void printDate(struct Date date)
{
    printf("%d-%d-%d", date.day, date.month, date.year);
}

int main()
{
   struct Date date = {1, 1, 2022};
   
    if(isFirstDayOfYear(date))
    {
        printf("Happy New Year\n");
    }
    else {
        printf("Not Happy at all :')\n");
    }

    struct Date firstDay = getFirstDay(2021);

    printf("First day of 2021 is ");
    printDate(firstDay);
}