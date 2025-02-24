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

    for(int i = 7; i < 12; i++) {
        for(int j = 12-i; j < i; j++) {
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
