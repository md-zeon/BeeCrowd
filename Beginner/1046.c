#include <stdio.h>

int main () {
    int start, end, hours;
    scanf("%d %d", &start, &end);

    if (start == end) {
        hours = 24 + start - end;
        printf("O JOGO DUROU %d HORA(S)\n", hours);
    } else if(start < end) {
        hours = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", hours);
    } else {
        hours = 24 + end - start;
        printf("O JOGO DUROU %d HORA(S)\n", hours);
    }
	
	return 0;
}