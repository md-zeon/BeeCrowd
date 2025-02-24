#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if ((B < A && C >= B) || (B > A && C > B && C - B >= B - A) || (B == A && C > B) || (B < A && C < B && C - B > B - A)) {
        printf(":)\n");
    } else {
        printf(":(\n");
    }

    return 0;
}
