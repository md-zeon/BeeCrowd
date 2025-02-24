#include <stdio.h>

int main () {
	int l, level;
    while(scanf("%d", &l) != EOF) {
        int speedest = 0;
        for(int i = 1; i <= l; i++) {
            int slug;
            scanf("%d", &slug);
            if(slug > speedest) {
                speedest = slug;
            }
        }
        
        if(speedest < 10) {
            level = 1;
        } else if (speedest >= 10 && speedest < 20) {
            level = 2;
        } else {
            level = 3;
        }
        printf("%d\n", level);
    }
	
	return 0;
}
