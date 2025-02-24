#include <stdio.h>

int main() {
    int card1, card2, card3;
    scanf("%d %d", &card1, &card2);

    if(card1 == card2) {
        card3 = card1;
    } else if (card1 > card2) {
        card3 = card1;
    } else {
        card3 = card2;
    }

    printf("%d\n", card3);

    return 0;
}