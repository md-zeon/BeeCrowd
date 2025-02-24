#include <stdio.h>

int main () {
	int t;
    scanf("%d", &t);
    int N[1000];

    for(int i = 0, j = 0; i < 1000; i++, j++) {
        if(j == t) {
            j = 0;
        }
        N[i] = j;
        printf("N[%d] = %d\n", i, N[i]);
    }
	
	return 0;
}
