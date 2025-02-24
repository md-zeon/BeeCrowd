#include <stdio.h>
#include <math.h>

int main () {
	double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double sides[] = {a, b, c};
    int size = sizeof(sides) / sizeof(sides[0]);

    for(int i = 1; i < size; i++) {
        double curr = sides[i];
        int prev = i - 1;

        while(prev >= 0 && sides[prev] < curr) {
            sides[prev + 1] = sides[prev];
            prev--;
        }
        sides[prev + 1] = curr;
    }

    a = sides[0];
    b = sides[1];
    c = sides[2];


    if(a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
        printf("TRIANGULO RETANGULO\n");
    } else if(pow(a, 2) > pow(b, 2) + pow(c, 2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if(pow(a, 2) < pow(b, 2) + pow(c, 2)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && a == c) {
        printf("TRIANGULO EQUILATERO\n");
    } else if((a == b && a != c) || (a != b && a == c) || (b == c && b != a)) {
        printf("TRIANGULO ISOSCELES\n");
    }
	
	return 0;
}