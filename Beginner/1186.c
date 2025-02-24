#include <stdio.h>

int main () {
    char O;
    scanf(" %c", &O);
    float M[12][12];

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            float num;
            scanf("%f", &num);
            M[i][j] = num;
        }
    }

    float sum = 0;

    for(int i = 11; i > 0; i--) {
        for(int j = 11; j > 11-i; j--) {
            sum+= M[i][j];
        }
    }

    if(O == 'S') {
        printf("%.1f\n", sum);
    } else if(O == 'M') {
        float elements = (12 * (12 - 1)) / 2;
        float average = sum / elements;
        printf("%.1f\n", average);
    }
	
	return 0;
}
