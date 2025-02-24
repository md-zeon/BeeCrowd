#include <stdio.h>

int main () {
	double N1, N2, N3, N4;
    scanf ("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    double average = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10.0;

    if (average >= 7.0) {
        printf("Media: %.1lf\n", average);
        printf("Aluno aprovado.\n");
    } else if(average >= 5 && average <= 6.9) {
        double Es;
        scanf("%lf", &Es);
        printf("Media: %.1lf\n", average);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", Es);
        average = (average + Es) / 2.0;
        if(average >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", average);
    } else {
        printf("Media: %.1lf\n", average);
        printf("Aluno reprovado.\n");
    }
	
	return 0;
}
