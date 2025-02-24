#include <stdio.h>

int main () {
	int t, n;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%d", &n);
        if(n == 0) {
            printf("NULL\n");
        } else if(n % 2 == 0 && n > 0) {
            printf("EVEN POSITIVE\n");
        } else if(n % 2 == 0 && n < 0) {
            printf("EVEN NEGATIVE\n");
        } else if(n % 2 != 0 && n > 0) {
            printf("ODD POSITIVE\n");
        } else {
            printf("ODD NEGATIVE\n");
        }
    }
	
	return 0;
}