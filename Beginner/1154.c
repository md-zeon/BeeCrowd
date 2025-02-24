#include <stdio.h>

int main () {
    int age, count = 0;
    scanf("%d", &age);
	float average = 0;

    while(age > 0) {
        average += age;
        count++;
        scanf("%d", &age);
    }

    average /= (float)count;

    printf("%.2f\n", average);
	
	return 0;
}
