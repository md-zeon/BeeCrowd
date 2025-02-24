#include <stdio.h>

int main () {
	double S = 1.00;

    for(int i = 2; i <= 100; i++) {
        S += (1.00 / i);
    }

    printf("%.2lf\n", S);

	
	return 0;
}
