#include <stdio.h>

int main () {
	int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++) {
        (i == t) ? printf("Ho!\n") : printf("Ho ");
    }
	
	return 0;
}
