#include <stdio.h>

void print(float salary, float percentage) {
    float earned = salary * percentage;
    salary += earned;
    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", earned);
    printf("Em percentual: %.0f %%\n", percentage * 100);
}

int main () {
	float salary;
    scanf("%f", &salary);

    if(salary >= 0 && salary <= 2000) {
        if(salary <= 400) {
            print(salary, 0.15);
        } else if(salary <= 800) {
            print(salary, 0.12);
        } else if(salary <= 1200) {
            print(salary, 0.10);
        } else {
            print(salary, 0.07);
        }
    } else {
        print(salary, 0.04);
    }
	
	return 0;
}
