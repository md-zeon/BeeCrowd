#include <stdio.h>

int main() {
    const char* months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 12) {
        printf("%s\n", months[n - 1]);
    }

    return 0;
}