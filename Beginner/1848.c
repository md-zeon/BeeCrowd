#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int sum = 0, scream = 0;
    while(scream < 3) {
        char str[10];
        gets(str);
        int len = strlen(str);
        int decimal = 0;
        for(int i = 0; i < len; i++) {
            if(str[i] == '*') {
                decimal += (int)pow(2, len - i - 1);
            }
        }
        sum += decimal;
        if(strcmp(str, "caw caw") == 0) {
            printf("%d\n", sum);
            sum = 0;
            scream++;
        }
    }

    return 0;
}
