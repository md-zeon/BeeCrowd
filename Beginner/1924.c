#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    for(int i = 0; i < t; i++) {
        char subject[100];
        fgets(subject, sizeof(subject), stdin);
    }
    printf("Ciencia da Computacao\n");

    return 0;
}