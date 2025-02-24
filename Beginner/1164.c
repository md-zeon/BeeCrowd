#include <stdio.h>

int main () {
	int t;
	scanf("%d", &t);

	for(int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		int sum = 0;

		for(int i = 1; i < n; i++) {
			if(n % i == 0) {
				sum += i;
			}
		}
		if(sum == n) {
			printf("%d eh perfeito\n", n);
		} else {
			printf("%d nao eh perfeito\n", n);
		}
	} 
		
	return 0;
}
