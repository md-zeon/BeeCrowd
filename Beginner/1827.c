#include <stdio.h>

int main () {
	int i,j,l,n;

    while(scanf("%d",&n) != EOF) {
        int mat[n][n];
        int halfn = (n % 2 != 0) ? ((n/2)+1) : n/2;
        int a = 0, b = n-1, c = n/3;
        for(l = 0; l <= halfn; l++) {
            for(i = a; i <= b; i++) {
                for(j = a; j <= b; j++) {
                    if(i == j){
                        mat[i][j] = 2;
                    } else if(i == a && j == b) {
                        mat[i][j] = 3;
                    } else if(i == b && j == a) {
                        mat[i][j] = 3;
                    } else {
                        mat[i][j] = 0;
                    }

                    if((i >=c && i < n-c) && (j >= c && j < n-c)) {
                        mat[i][j] = 1;
                    }
                }
            }
            a++, b--;
        }
        if(n % 2 != 0) {
            mat[n/2][n/2] = 4;
        }
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                printf("%d",mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
	
	return 0;
}
