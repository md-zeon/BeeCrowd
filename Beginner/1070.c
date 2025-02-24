#include <stdio.h>

int main () {
	int n, odd = 0;
    scanf("%d", &n);

    for(int i = n; i <= n+15; i++) {
        if(odd == 6){
          break;  
        }
        if(i % 2 != 0) {
            odd++;
            printf("%d\n", i);
        }
    }
	
	return 0;
}
