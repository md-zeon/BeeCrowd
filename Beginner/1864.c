#include <stdio.h>
#include <ctype.h>

int main() {
    char qoute[34] = "Life is not a problem to be solved";
    int len;
    scanf("%d", &len);

    for(int i = 0; i < len; i++) {
        printf("%c", toupper(qoute[i]));
    }
    printf("\n");

    return 0;
}