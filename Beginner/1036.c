#include <stdio.h>
#include <math.h>

int main () {
	float a,b,c,R1,R2,discriminant;
    scanf("%f %f %f",&a,&b,&c);

    discriminant = pow(b,2) - 4 * a * c;

    if (discriminant < 0 || a == 0) {
        printf("Impossivel calcular\n");
    } else {
        R1 = (-b+sqrt(discriminant)) / (2 * a);
        R2 = (-b-sqrt(discriminant)) / (2 * a);
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
	
	return 0;
}
