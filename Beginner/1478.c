#include <stdio.h>

int main () {
	int n, i, j, l, a, b;
    scanf("%d", &n);

    while(n != 0) {
        int mat[n][n];
        a = 0, b = n-1;
        for(l = 0; l <= n-1; l++) {
            for(i = a; i <= b; i++) {
                for(j = a; j <= b; j++) {
                    if(i == a) mat[i][j] = j+1;
                    if(i > a && j == b) mat[i][j] = b-i+1;
                    if(i > a && j == a) mat[i][j] = i+1;
                    if(j > a && i == b) mat[i][j] = b-j+1;
                }
            }
            b--;
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
