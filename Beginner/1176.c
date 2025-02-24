#include <stdio.h>

int main () {

    long long int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    for(int j = 2; j < 61; j++) {
        fib[j] = fib[j-1] + fib[j-2];
    }
	int t;
    scanf("%d", &t);


    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }
	
	return 0;
}