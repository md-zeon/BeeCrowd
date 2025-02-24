#include <stdio.h>

int main () {
	int N[10];
    int x;
    scanf("%d", &x);

    for(int i = 0; i < 10; i++) {
        N[i] = x;
        x *= 2;
    }

    for(int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
	
	return 0;
}