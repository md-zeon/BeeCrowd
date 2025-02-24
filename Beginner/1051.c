#include <stdio.h>

int main () {
	float salary, tax;
    scanf("%f", &salary);

    if(salary >= 0 && salary <= 4500) {
        if(salary <= 2000) {
            printf("Isento\n");
        } else if(salary <= 3000) {
            salary -= 2000;
            tax = salary * 0.08;
            printf("R$ %.2f\n", tax);
        } else {
            salary -= 2000 + 1000;
            tax = (1000 * 0.08) + (salary * 0.18);
            printf("R$ %.2f\n", tax);
        }
    } else if(salary > 4500) {
        salary -= 2000 + 1000 + 1500;
        tax = (1000 * 0.08) + (1500 * 0.18) + (salary * 0.28);
        printf("R$ %.2f\n", tax);
    }
	
	return 0;
}
