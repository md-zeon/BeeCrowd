#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int torture = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            torture = i;
        }
    }

    printf("%d\n", torture+1);

    return 0;
}