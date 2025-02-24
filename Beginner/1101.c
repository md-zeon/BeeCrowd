#include <stdio.h>

int main () {
	int x, y;
    do {
        int sum = 0;
        scanf("%d %d", &x, &y);
        if(x <= 0 || y <= 0) {
            break;
        } else if(x > y) {
            x = x ^ y;
            y = x ^ y;
            x = x ^ y;
        }

        for(int i = x; i <= y; i++) {
            printf("%d ", i);
            sum += i;    
        }
        printf("Sum=%d\n", sum);

    } while (x > 0 && y > 0);
    
	
	return 0;
}