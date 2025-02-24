/*
#include <stdio.h>

int main () {
	int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int odd = 0, sum = 0;
        
        while(odd < y) {
            if(x % 2 != 0) {
                sum += x;
                odd++, x++;
            } else {
                x++;
            }
        }
        printf("%d\n", sum);
    }
	
	return 0;
}
*/

#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int sum = 0;

        if(x % 2 == 0) {
            x++;
        }

        sum = y * x + y * (y - 1);
        printf("%d\n", sum);
    }

    return 0;
}