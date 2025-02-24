#include <stdio.h>

int main () {
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
    
	return 0;
}