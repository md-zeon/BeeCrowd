#include <stdio.h>

int main () {
    const int password = 2002;
    int num;
    scanf("%d", &num);
    while(num != password) {
        printf("Senha Invalida\n");
        scanf("%d", &num);
    }
    printf("Acesso Permitido\n");
    
	return 0;
}