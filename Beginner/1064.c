#include <stdio.h>

int main () {
	float n, average = 0;
    int positive = 0;
    
    for(int i = 0; i < 6; i++) {
        scanf("%f", &n);
        if(n > 0) {
            average += n;
            positive++;
        }
    }
    average /= positive;
    printf("%d valores positivos\n", positive);
    printf("%.1f\n", average);

	return 0;
}
