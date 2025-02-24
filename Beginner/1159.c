#include <stdio.h>

int main () {
    int x;
    scanf("%d", &x);

    while(x != 0) {
        int sum = 0, count = 0;
        while(count < 5) {
            if(x % 2 != 0) {
                x++;
            } else {
                sum += x;
                x+=2;
                count++;
            }
        }
        printf("%d\n", sum);
        scanf("%d", &x);
    }


    return 0;
}