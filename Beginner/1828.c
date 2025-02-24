#include <stdio.h>
#include <string.h>


int main() {
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++) {
        char option1[20], option2[20];
        scanf("%s %s", option1, option2);
        //^ pedra, papel, tesoura, lagarto e Spock (rock, paper, scissors, lizard and Spock).
        if(strcmp(option1, "pedra") == 0 && (strcmp(option2, "tesoura") == 0 || strcmp(option2, "lagarto") == 0)) {
            printf("Caso #%d: Bazinga!\n", i);
        } else if(strcmp(option1, "papel") == 0 && (strcmp(option2, "pedra") == 0 || strcmp(option2, "Spock") == 0)) {
            printf("Caso #%d: Bazinga!\n", i);
        } else if(strcmp(option1, "tesoura") == 0 && (strcmp(option2, "papel") == 0 || strcmp(option2, "lagarto") == 0)) {
            printf("Caso #%d: Bazinga!\n", i);
        } else if(strcmp(option1, "lagarto") == 0 && (strcmp(option2, "Spock") == 0 || strcmp(option2, "papel") == 0)) {
            printf("Caso #%d: Bazinga!\n", i);
        } else if(strcmp(option1, "Spock") == 0 && (strcmp(option2, "tesoura") == 0 || strcmp(option2, "pedra") == 0)) {
            printf("Caso #%d: Bazinga!\n", i);
        } else if(strcmp(option1, option2) == 0) {
            printf("Caso #%d: De novo!\n", i);
        } else {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}