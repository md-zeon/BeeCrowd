#include <stdio.h>

int main () {
	double S = 1.00;

    for(int i = 3, j = 2; i <= 39; i+=2, j*= 2) {
        S += ((double)i / j);
    }

    printf("%.2lf\n", S);

	
	return 0;
}
