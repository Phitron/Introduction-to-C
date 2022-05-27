#include <stdio.h>

char * strChr(char * str, char pattern) {
    while(*str != pattern && * str != '\0')
    {
        str++;

    }
    
    if(*str == pattern)
    {
        return str;
    }
    else {
        return NULL;
    }
}

int main() {
    char text[100];
    fgets(text, 100, stdin);
    char pattern;
    scanf(" %c", &pattern);
    
    char *cur = text;
    
    while(cur)
    {
        char * pos = strChr(cur, pattern);
        if(pos == NULL) break;
        printf("Found at %d\n", pos - text);
        cur = pos + 1;
    }
        
    return 0;
}