#include <stdio.h>

int main() {
    int t, s;
    scanf("%d %d", &t, &s);
    double fuel;
    fuel = (t * s) / 12.0;
    printf("%.3lf\n", fuel);

    return 0;
}