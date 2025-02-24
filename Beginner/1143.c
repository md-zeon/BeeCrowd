#include <stdio.h>
#include <math.h>

int main () {
	int n;
    scanf("%d", &n);
	
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 3; j++) {
            if(j == 3) {
                printf("%.0lf\n", pow(i, j));
            } else {
                printf("%.0lf ", pow(i, j));
            }
        }
    }
	
	return 0;
}
