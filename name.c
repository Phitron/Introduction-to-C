#include <stdio.h>

int main()
{
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 0 || i == 2 || i == 4){
                printf("*");
            }

            else if (i == 1){
                if (j == 0){
                    printf("*");
                }
            }

            else if (i == 3){
                if (j == 3){
                    printf("   *");
                }
            }


            printf(" ");
        }

        printf("\n");
    }
    
    return 0;
}    
