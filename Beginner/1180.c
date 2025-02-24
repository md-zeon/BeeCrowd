#include <stdio.h>

int main () {
	int N;
    scanf("%d", &N);
    int X[N];
    int index = 0;
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if(X[index] >= X[i]) {
            index = i;
        }
    }
    printf("Menor valor: %d\n", X[index]);
    printf("Posicao: %d\n", index);
	
	return 0;
}
