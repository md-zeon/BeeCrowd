#include <stdio.h>
#include <stdbool.h>

bool is_triangle(int a, int b, int c) {
    return (a + b > c) && (b + c > a) && (c + a > b);
}

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (is_triangle(A, B, C) || is_triangle(A, B, D) || is_triangle(A, C, D) || is_triangle(B, C, D)) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
