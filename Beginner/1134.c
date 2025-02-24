#include <stdio.h>

int main () {
    int n, alcool = 0, gasoline = 0, disel = 0;
	scanf("%d", &n);
    while(n != 4) {
        if(n == 1) {
            alcool++;
        } else if(n == 2) {
            gasoline++;
        } else if(n == 3) {
            disel++;
        }
        scanf("%d", &n);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", disel);

	return 0;
}