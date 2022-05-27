#include <stdio.h>

void makeStrCopy(char in[], char out[])
{
    int i = 0;
    while (in[i] != '\0')
    {
        out[i] = in[i];
        i++;
    }

    out[i] = '\0';
    
}

int main() {
    
    char in[] = "hello";
    char out[6];
    
    makeStrCopy(in, out);
    
    printf("in = %s  out = %s\n", in, out);
    
    return 0;
}