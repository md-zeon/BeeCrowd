#include <stdio.h>

int main () {
	int N[20];

    for(int i = 19; i >= 0; i--) {
        int x;
        scanf("%d", &x);
        N[i] = x;
    }

    for(int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
	
	return 0;
}