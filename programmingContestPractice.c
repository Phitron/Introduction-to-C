#include <stdio.h>

int main(){
    int H, W, h, w;

    scanf("%d %d", &H, &W);
    scanf("%d %d", &h, &w);

    printf("%d", (H - h) * (W - w));

    return 0;
}