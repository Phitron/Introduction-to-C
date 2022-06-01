#include <stdio.h>
#include <string.h>

unsigned int convertBinaryToInt(char binary[])
{
    int len = strlen(binary);

    unsigned int decimal_1 = 0;
    unsigned int decimal_2 = 0;

    //first way
    for(int i = len - 1, j = 1; i >= 0; i--, j*=2)
    {
        if(binary[i] == '1') {
            decimal_1 += j;
        }
    }

    //second way
    for(int i = 0; i < len; i++)
    {
        int bit = binary[i] - '0';
        decimal_2 = decimal_2 * 2 + bit;
    }
    
    return decimal_1;
}


void convertIntToBinary(unsigned int decimal)
{
    char binary[1000];

    int i = 0;

    while(decimal > 0)
    {
        int d = decimal % 2;
        decimal = decimal/2;
        char bit = d + '0';
        binary[i] = bit;
        i++;
    }

    binary[i] = '\0';

    int l = 0;
    int r = i - 1;

    while(l < r)
    {
        char temp = binary[l];
        binary[l] = binary[r];
        binary[r] = temp;
        
        l++;
        r--;
    }

    printf("%s", binary);

}



int main()
{
    unsigned int decimal = 25 >> 5;
    convertIntToBinary(decimal);
    printf("\n");
    
    char binary[] = "11001";
    printf("%u\n", convertBinaryToInt(binary));
}

