#include <stdio.h>

int main () {
	int a, n, sum = 0;
    scanf ("%d %d", &a, &n);

    while(n <= 0) {
        scanf ("%d", &n);
    }

    for(int i = 0; i < n; i++) {
        sum += i + a;
    }

    printf("%d\n", sum);
	
	return 0;
}
