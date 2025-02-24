#include <stdio.h>

int main () {
	int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int x, y, sum = 0;
        scanf("%d %d", &x, &y);
        if(x > y) {
            x = x ^ y;
            y = x ^ y;
            x = x ^ y;
        }
        for(int j = x+1; j < y; j++) {
            if(j % 2 != 0) {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }
	
	return 0;
}