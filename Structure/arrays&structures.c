#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[100];
    int class;
    int id;
    struct Date dob;
    char favSubjects[3][5];
};

void printDate(struct Date date)
{
    printf("%d-%d-%d", date.day, date.month, date.year);
}

void printStudent(struct Student st)
{
    printf("Name: %s\n", st.name);
    printf("Class: %d\n", st.class);
    printf("ID: %d\n", st.id);
    printf("Date of Birth: ");
    printDate(st.dob);
    printf("\n");

    printf("Fav Subjects: { ");
    for(int i = 0; i < 3; i++)
    {
        printf("%s ", st.favSubjects[i]);
    }
    printf("}\n");
}

int main()
{
    char name[] = "Samiun Black";
    char favSubjects[3][5] = {"Math", "Phys", "Chem"};    

    struct Student st1 = {.class=9, .id=242055, .dob={6, 8, 2006}};    
    strcpy(st1.name, name);


    for(int i = 0; i < 3; i++)
    {
        int j;

        for(j = 0; j < strlen(favSubjects[i]); j++){
            st1.favSubjects[i][j] = favSubjects[i][j]; 
        }
        
        st1.favSubjects[i][j] = '\0';
    }

    printStudent(st1);

    

}