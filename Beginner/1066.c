#include <stdio.h>

int main () {
	int number, even = 0, odd = 0, positive = 0, negative = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &number);
        if(number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if(number < 0) {
            negative++;
        } else {
            if(number != 0) {
            positive++;
            }
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);
	
	return 0;
}
