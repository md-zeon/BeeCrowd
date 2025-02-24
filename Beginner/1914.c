#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        char person1[100], person2[100], choice1[10], choice2[10];
        scanf("%s %s %s %s", person1, choice1, person2, choice2);
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        int sum = n1 + n2;
        if(sum % 2 == 0) {
            if(strcmp(choice1, "PAR") == 0) {
                printf("%s\n", person1);
            } else if(strcmp(choice2, "PAR") == 0) {
                printf("%s\n", person2);
            }
        } else {
            if(strcmp(choice1, "IMPAR") == 0) {
                printf("%s\n", person1);
            } else if(strcmp(choice2, "IMPAR") == 0) {
                printf("%s\n", person2);
            } 
        }

    }

    return 0;
}