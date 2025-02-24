#include <stdio.h>

int main () {
	float number;
    int positive = 0;

    for(int i = 0; i < 6; i++) {
        scanf("%f", &number);
        if(number > 0) {
            positive++;
        }
    }
    printf("%d valores positivos\n", positive);

	return 0;
}
