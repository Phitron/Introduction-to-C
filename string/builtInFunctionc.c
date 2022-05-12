#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";

    printf("%s\n", strlwr(str)); //output: hello world

    // char str_upper[] = strupr(str);
    // printf("%s\n", str_upper); //output: HELLO WORLD

    // //compare without cases
    // char str_cmp_wo_case[] = strcmpi(str, "hello world");
    // printf("%ld\n", str_cmp_wo_case); //output: 0

    // char str_duplicate[] = strdup(str);
    // printf("%s\n", str_duplicate); //output: Hello World
    
    // //index of first occurrence of given char
    // char str_first_occurrence[] = strchr(str, 'e');
    // printf("%d\n", str_first_occurrence);

    // //index of first occurrence of given string
    // char str_first_occur_str[] = strstr(str, "ello");
    // printf("%d\n", str_first_occur_str);

    // //sets all the chars of string to given char
    // char str_set_char[] = strset(str, "h");
    // printf("%s\n", str_set_char);

    // //reverses a string
    // char str_reverse[] = strrev(str);
    // printf("%s\n", str_reverse);


    return 0;
}