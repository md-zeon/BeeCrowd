#include <stdio.h>

int main() {
    int C;
    scanf("%d", &C);
    for(int i = 0; i < C; i++) {
        int S = 0, n;
        scanf("%d", &n);
        for(int j = 0; j < n; j++) {
            if(j % 2 == 0) {
                S += 1;
            } else {
                S -= 1;
            }
        }
        printf("%d\n", S);

    }

    return 0;
}