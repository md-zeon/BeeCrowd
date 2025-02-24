#include <stdio.h>

int main () {

    int i = 0, j = 0; 
    int even[5];
    int odd[5];

    for(int k = 0; k < 15; k++) {
        int n;
        scanf("%d", &n);
        if(n % 2 == 0) {
            even[i] = n;
            i++;
        } else {
            odd[j] = n;
            j++;
        }
        if(i == 5) {
            for(int m = 0; m < i; m++) {
                printf("par[%d] = %d\n", m, even[m]);
            }
            i = 0;
        } else if(j == 5) {
            for (int n = 0; n < j; n++) {
                printf("impar[%d] = %d\n", n, odd[n]);
            }
            j = 0;
        }
    }

    for(int l = 0; l < j; l++) {
        printf("impar[%d] = %d\n", l, odd[l]);
    }

    for(int l = 0; l < i; l++) {
        printf("par[%d] = %d\n", l, even[l]);
    }
	
	return 0;
}
