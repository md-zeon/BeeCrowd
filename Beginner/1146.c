#include <stdio.h>

int main () {
	int n;
    scanf ("%d", &n);

    while(n != 0) {
        for(int i = 1; i <= n; i++) {
            if(i == n) {
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
        }
        scanf ("%d", &n);
    }
	
	return 0;
}
