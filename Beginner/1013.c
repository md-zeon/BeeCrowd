#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, c, MaiorAB;
    scanf("%d %d %d", &a, &b, &c);
    MaiorAB = ((a+b+abs(a-b)))/2;

    if(MaiorAB < c) {
        MaiorAB = c;
    }
    printf("%d eh o maior\n", MaiorAB);
	
	return 0;
}
