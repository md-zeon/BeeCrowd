#include <stdio.h>

int main () {
	int position = 0, num, largest = 0;
	for(int i = 1; i <= 100; i++) {
        scanf("%d", &num);
        if(num > largest) {
            largest = num;
            position = i;
        }
    }
    
    printf("%d\n", largest);
    printf("%d\n", position);

	return 0;
}