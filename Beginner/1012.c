#include <stdio.h>
#include <math.h>

int main () {
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangulo = 0.5 * A * C;
    circulo = 3.14159 * pow(C, 2);
    trapezio = 0.5 * (A + B) * C;
    quadrado = B * B;
    retangulo = A * B;
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
	
	return 0;
}