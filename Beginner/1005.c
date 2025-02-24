#include <stdio.h>
 
int main() {
 
    /*
     * Code your solution here
    */
     float A, B, MEDIA;
     scanf("%f %f", &A, &B);
     MEDIA = ((A * 3.5) + (B * 7.5)) / (float) 11;
     printf("MEDIA = %.5f\n", MEDIA);
 
    return 0;
}