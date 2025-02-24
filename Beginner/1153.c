#include <stdio.h>

int main () {
	int n;
    scanf("%d", &n);
    
    int factorial = 1;
    for(int i = 0; i < n; i++) {
        factorial = factorial * (n - i);
    }

    printf("%d\n", factorial);
	
	return 0;
}