#include <stdio.h>

int main () {
    
	for(float i = 0; i < 2.2; i+=0.2) {
        for(float j = i+1; j < i+3.2; j++) {
            if((i > 0 && i < 1) || (i > 1 && i < 2)) {
                printf("I=%.1f J=%.1f\n", i, j);
            } else {
                printf("I=%d J=%d\n", (int)i, (int)j);
            }
        }
    }
	
	return 0;
}
