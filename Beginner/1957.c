#include <stdio.h>

int main() {
    long long int dec;
    scanf("%lli", &dec);

    long long int q = dec, r, idx = 0;
    long long int num = dec, len = 0;
    while (num > 0) {
        num /= 10;
        len++;
    }

    char hex[len+1];

    while(q > 0) {
        r = q % 16;
        q /= 16;
        if(r < 10) {
            hex[idx++] = r + '0';
        } else {
            hex[idx++] = 'A' + (r - 10);
        }
    }

    for(int i = 0; i < idx / 2; i++) {
        int temp = hex[i];
        hex[i] = hex[idx-1-i];
        hex[idx-1-i] = temp;
    }

    hex[idx] = '\0';

    printf("%s\n", hex);

    return 0;
}