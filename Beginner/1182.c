#include <stdio.h>

int main () {
	int C;
    scanf("%d", &C);
    char T;
    scanf(" %c", &T);
    float M[12][12];

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            float num;
            scanf("%f", &num);
            M[i][j] = num;
        }
    }

    float sum = 0;

    for(int i = 0, j = C; i < 12; i++) {
        sum+= M[i][j];
    }

    if(T == 'S') {
        printf("%.1f\n", sum);
    } else if(T == 'M') {
        float average = sum / 12.0;
        printf("%.1f\n", average);
    }
	
	return 0;
}
