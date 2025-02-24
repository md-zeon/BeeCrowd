#include <stdio.h>

int main () {
	int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int R1, R2, B;
        scanf("%d %d", &R1, &R2);
        B = R1 + R2;
        printf("%d\n", B);
    }
	
	return 0;
}
