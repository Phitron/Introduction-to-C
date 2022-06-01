#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char  name[100];
    int class;
    int roll;
    struct Date dob;
};

struct Point {
    int x;
    int y;
};


void problem1();
bool problem2(struct Date date);
bool isBirthday(struct Date date, struct Student student);
void findMidPoint(struct Point point1, struct Point point2);

int main()
{
    struct Point point1 = {3, 3};
    struct Point point2 = {-9, -9};
    findMidPoint(point1, point2);    
}


void problem1()
{
    char name[] = "Peter Parker";
    struct Student std = {.class=4, .roll=23, .dob={16, 10, 1982}};

    strcpy(std.name, name);

    printf(
        "Name: %s\nClass: %d\nRoll: %d\nDOB: %d-%d-%d\n",
        std.name, std.class, std.roll, std.dob.day, std.dob.month, std.dob.year
    );
}

bool isLeapYear(int year)
{
   if(year % 4 == 0) 
   {
      if(year % 100 == 0 && year % 400 != 0) 
      {
          return false;
      }
      else {
          return true;
      }
   }
   else {
       return false;
   }
}


bool problem2(struct Date date)
{
    int months[] = {30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(date.month == 2)
    {
        if(date.day == 29)
        {
            return isLeapYear(date.year);
        }
    }
    else {
        if(date.month > 12)
        {
            return false;
        }
        else if(date.day > months[date.month - 1]){
            return false;
        }

    }
    return true;
}


bool isBirthday(struct Date date, struct Student student)
{
    if(date.day == student.dob.day && date.month == student.dob.month && date.year == student.dob.year)
    {
        return true;
    }

    return false;
}


void findMidPoint(struct Point point1, struct Point point2)
{
    int midX = (point1.x + point2.x)/2;
    int midY = (point1.y + point2.y)/2;

    printf("(%d, %d)", midX, midY); 
}


