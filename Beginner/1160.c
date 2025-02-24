#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
	    int a, b, pa, pb, year = 0;
        float g1, g2;
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        a = pa, b = pb;
        while(a <= b) {
            a += a * (g1 / 100);
            b += b * (g2 / 100);
            year++;
            if(year > 100)
                break;
        }

        if(year > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", year);
        }
    }
	
	return 0;
}
