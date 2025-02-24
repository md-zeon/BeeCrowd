#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a % b;
    if (r < 0) {
        r += abs(b);
        q -= (b > 0) ? 1 : -1;
    }
    printf("%d %d\n", q, r);
    return 0;
}