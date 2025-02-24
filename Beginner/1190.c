#include <stdio.h>

int main () {
    char O;
    scanf(" %c", &O);
    double M[12][12];

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            double num;
            scanf("%lf", &num);
            M[i][j] = num;
        }
    }

    double sum = 0;

    for(int i = 1; i < 6; i++) {
        for(int j = 11; j >= 12-i; j--) {
            sum+= M[i][j];
        }
    }
    for(int i = 6; i < 11; i++) {
        for(int j = 11; j > i; j--) {
            sum+= M[i][j];
        }
    }

    if(O == 'S') {
        printf("%.1lf\n", sum);
    } else if(O == 'M') {
        double average = sum / 30.0;
        printf("%.1lf\n", average);
    }
	
	return 0;
}
