#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    while (n != 0) {
        int mat[n][n];
        int num = 1;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                mat[i][j] = num;
                num *= 2;
            }
            num = mat[i][0] * 2;
        }
        int largest = mat[n - 1][n - 1];

        int t = 0;
        while (largest > 0) {
            largest /= 10;
            t++;
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                (j == 0) ? printf("%*d", t, mat[i][j]) : printf(" %*d", t, mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &n);
    }

    return 0;
}
