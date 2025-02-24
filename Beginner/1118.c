#include <stdio.h>

int main () {
    int choice = 0;
    while(choice != 2) {
    	float n, average = 0;
        int  valid_score = 0;
        
        while (valid_score < 2) {
            scanf("%f", &n);
            
            if(n >= 0 && n <= 10) {
                valid_score++;
                average+= n;
            } else {
                printf("nota invalida\n");
            }
        }
        
        average /= valid_score;
        printf("media = %.2f\n", average);

        choice = 0;
        while(choice != 1) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &choice);
            if(choice == 2) {
                break;
            }
        }
    }
    
	return 0;
}