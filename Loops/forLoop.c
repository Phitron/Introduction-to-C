#include <stdio.h>

int main(){
    int n = -5;
    for (int i=1; i<=n; i++){
        printf("%d\n", i);
    }

    for (int i=0; i<3; i++) {
    	for (int j=0; j<5; j++) {
        	printf("*");
    	}
	}
}