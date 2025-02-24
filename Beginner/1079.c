#include <stdio.h>

int main () {
	int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        float a, b, c, average;
        scanf("%f %f %f", &a, &b, &c);
        average = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1f\n", average);
    }
    
	
	return 0;
}
