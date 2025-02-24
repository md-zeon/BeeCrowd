#include <stdio.h>

int main () {
	int x, z;
    scanf("%d %d", &x, &z);

    while(z <= x) {
        scanf("%d", &z);
    }

    int count = 0, sum = 0;

    while(sum < z) {
        sum+= x;
        x++;
        count++;
    }

    printf("%d\n", count);
	
	return 0;
}