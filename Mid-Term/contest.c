#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    char name[1000];
    scanf("%s", name);

    int charFreq[1000];
    int index = 0;

    for(int i = 0; i < strlen(name); i++)
    {
        bool found = false;
        for(int j = 0; j < index; j++)
        {
            if (charFreq[j] == name[i])
            {
                found = true;
            }
        }

        if(found == false)
        {
            charFreq[index] = name[i];
            index++;
        }
        
    }



    if(index % 2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    
    return 0;
} 
