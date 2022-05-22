#include <stdio.h>

void stringCat(char a[], char b[], char out[]){
    int i = 0;
    while (a[i] != '\0'){
        out[i] = a[i];
        i++;
    }
    
    int j = 0;
    while(b[j] != '\0'){
        out[i] = b[j];
        i++;
        j++;
    }
    
    out[i] = '\0';
    
    printf("%s", out);
}

int main() {
    char a[4] = {'a', 'b', 'a', '\0'};
    char b[4] = {'c', 'd', 'c', '\0'};
    char out[9];
    stringCat(a, b, out);
    return 0;
}