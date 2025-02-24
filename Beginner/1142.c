#include <stdio.h>

int main () {
	int n, pum = 1;
    scanf("%d", &n);
	
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= 4; j++) {
            if(j % 4 == 0) {
                printf("PUM\n");
            } else {
                printf("%d ", pum);
            }
            pum++;
        } 
    }

	return 0;
}
