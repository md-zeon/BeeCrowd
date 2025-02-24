#include <stdio.h>

int main () {
	int number, even = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &number);
        if(number % 2 == 0) {
            even++;
        }
    }

    printf("%d valores pares\n", even);
	
	return 0;
}
