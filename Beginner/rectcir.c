#include <stdio.h>

int main () {
	int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

    if(x+r <= W && y+r <= H && x > 0 && y > 0) {
        printf("Yes");
    } else {
        printf("No");
    }

	return 0;
}