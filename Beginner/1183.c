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

    for(int i = 0; i < 11; i++) {
        for(int j = i+1; j < 12; j++) {
            sum+= M[i][j];
        }
    }

    if(O == 'S') {
        printf("%.1f\n", sum);
    } else if(O == 'M') {
        float average = sum / 66.0;
        printf("%.1f\n", average);
    }
	
	return 0;
}
