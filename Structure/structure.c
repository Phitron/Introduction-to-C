// #include <stdio.h>

// struct Date 
// {
//     int day; 
//     int month;
//     int year;

// };

// int main()
// {
//     struct Date date1, date2;

//     printf("Enter Person 1's birthday:");
//     scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

//     printf("Enter Person 2's birthday:"); 
//     scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

//     if(date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
//     {
//         printf("Same");
//     }
//     else {
//         printf("Not Same");
//     }
// }

#include<stdio.h>

struct site

{

    char name[] = "Hello";

    int no_of_pages = 200;

};

int main()

{

    struct site ptr;

    printf("%d ", ptr.no_of_pages);

    printf("%s", ptr.name);

    return 0;

}
