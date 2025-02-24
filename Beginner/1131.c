#include <stdio.h>

int main () {
    int choice = 0, grenais = 1, i = 0, g = 0, draw = 0;
	while(choice != 2) {
        int inter, gremio;
        scanf("%d %d", &inter, &gremio);
        if(inter > gremio) {
            i++;
        } else if(inter == gremio) {
            draw++;
        } else {
            g++;
        }
        while(choice != 2) {
            printf("Novo grenal (1-sim 2-nao)\n");
            choice = 0;
            scanf("%d", &choice);
            if(choice == 1) {
                grenais++;
                break;
            }
        }
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", draw);

    if(i > g) {
        printf("Inter venceu mais\n");
    } else if(i == g) {
        printf("Não houve vencedor\n");
    } else {
        printf("Gremio venceu mais\n");
    }
	
	return 0;
}