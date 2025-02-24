#include <stdio.h>
#include <math.h>

int main () {
	int a, b, c;

    while(1) {
        scanf("%d", &a);
        if(a == 0) {
            break;
        }
        scanf("%d %d", &b, &c);
        int house_area = a * b;
        int total_land = house_area / (c / 100.0);
        int land_side = sqrt(total_land);

        printf("%d\n", land_side);
    }
	
	return 0;
}
