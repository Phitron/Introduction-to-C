#include <stdio.h>

int main(){
    int marksEnglish;
    int marksMath;

    printf("Enter your english marks: ");
    scanf("%d", &marksEnglish);

    printf("Enter your math marks: ");
    scanf("%d", &marksMath);

    printf("Total = %d", marksEnglish + marksMath);

    return 0;
}