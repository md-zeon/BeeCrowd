#include <stdio.h>

struct product
{
    int code, units;
    float price;
};


int main () {
    
    struct product p1, p2;    
    scanf("%d %d %f %d %d %f", &p1.code, &p1.units, &p1.price, &p2.code, &p2.units, &p2.price);
	float amount = (p1.units * p1.price) + (p2.units * p2.price);
    printf("VALOR A PAGAR: R$ %.2f\n", amount);

	return 0;
}
