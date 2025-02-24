#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        char name[30];
        scanf("%s", name);
        int N;
        scanf("%d", &N);
        if(strcmp(name, "Thor") == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}