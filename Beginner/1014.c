#include <stdio.h>
 
int main() {
 
    /*
     * Code your solution here
     */
     int X;
     float Y, consume;
     scanf("%d %f", &X, &Y);
     consume = X / Y;
     printf("%.3f km/l\n", consume);
 
    return 0;
}