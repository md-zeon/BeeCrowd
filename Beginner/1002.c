#include <stdio.h>

int main () {
    /*
     * Code your solution here
     */
	double R, A;
    scanf ("%lf", &R);
    const double PI = 3.14159;
    A = PI * R * R;
    printf("A=%.04lf\n", A);
    
	return 0;
}
