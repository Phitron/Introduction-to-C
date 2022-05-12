#include <stdio.h>


int main()
{
    char nums[10];
    scanf("%s", nums);

    int freq[10] = {0};

    for(int i = 0; i < 9; i++)
    {
        int digit = nums[i] - '0';
        freq[digit]++;
    }

    int ans;

    for(int i = 0; i <= 9; i++)
    {
        if(freq[i] == 0){
           ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}