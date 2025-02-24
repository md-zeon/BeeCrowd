#include <stdio.h>

int main () {
	int n;
    scanf("%d", &n);

    int t1 = 0, t2 = 1, t3;
	
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == 1) {
            (i == n-1) ? printf("%d\n", i) : printf("%d ", i);
        } else {
            t3 = t1 + t2;
            (i == n-1) ? printf("%d\n", t3) : printf("%d ", t3);
            t1 = t2;
            t2 = t3;
        }
    }

	return 0;
}
