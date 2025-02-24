#include <stdio.h>

int main () {
	int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(b != 0) {
            float result = (float)a / b;
            printf("%.1f\n", result);
        } else {
            printf("divisao impossivel\n");
        }
    }
	
	return 0;
}
