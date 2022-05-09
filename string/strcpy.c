#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hulk";

    char str2[20];

    strcpy(str2, str); 
    //strcpy(destination, source)


    strncpy(str2, str, 9); //to avoid overflow
    //strncpy(dest, src, size)
    str2[9] = '\0';// for printing perfectly

    return 0;
}