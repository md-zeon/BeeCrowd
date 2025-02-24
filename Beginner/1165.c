#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);

	for(int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		
        if(n == 2) {
            printf("%d eh primo\n", n);
        } else {
            bool is_primo = true;

            for(int i = 2; i <= sqrt(n); i++) {
                if(n % i == 0) {
                    is_primo = false;
                }
            }
            if(is_primo == true) {
                printf("%d eh primo\n", n);
            } else {
                printf("%d nao eh primo\n", n);
            }
        }

	} 
		
	return 0;
}
