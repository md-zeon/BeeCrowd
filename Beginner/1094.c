#include <stdio.h>

int main () {
	int t, total = 0, frogs = 0, rats = 0, rabbits = 0;
    int num;
    char c;
    scanf("%d", &t);
	for(int i = 0; i < t; i++) {
        scanf("%d %c", &num, &c);
        if(c == 'C') {
            rabbits += num;
        } else if(c == 'R') {
            rats += num;
        } else if(c == 'S') {
            frogs += num;
        }
        total += num;
    }
    float percentage_1, percentage_2, percentage_3;
    percentage_1 = ((float)rabbits / total) * 100;
    percentage_2 = ((float)rats / total) * 100;
    percentage_3 = ((float)frogs / total) * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2f %%\n", percentage_1);
    printf("Percentual de ratos: %.2f %%\n", percentage_2);
    printf("Percentual de sapos: %.2f %%\n", percentage_3);

	return 0;
}
