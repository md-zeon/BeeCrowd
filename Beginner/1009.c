#include <stdio.h>

int main () {
    char name[30];
    scanf ("%s", name); // can get first name
    // fgets(name, sizeof(name), stdin); //can get full name
    double salary, products_sold, total;
    scanf("%lf %lf", &salary, &products_sold);
    total = salary + (products_sold * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;
}
