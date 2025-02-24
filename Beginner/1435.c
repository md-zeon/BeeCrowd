#include <stdio.h>

int main () {
	int n, i, j, l, a, b;
    scanf("%d", &n);

    while(n != 0) {
        int mat[n][n];
        int halfn = (n % 2 != 0) ? ((n/2)+1) : n/2;
        a = 0, b = n-1;
        for(l = 1; l <= halfn; l++) {
            for(i = a; i <= b; i++) {
                for(j = a; j <= b; j++) {
                    mat[i][j] = l;
                }
            }
            a++; b--;
        }
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                (j == 0) ? printf("%3d", mat[i][j]) : printf(" %3d", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &n);
    }
	
	return 0;
}
