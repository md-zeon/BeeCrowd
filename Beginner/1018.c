#include <stdio.h>

void printNote(int note, int *taka);

int main() {
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int size = sizeof(notes) / sizeof(notes[0]);
    int taka;
    scanf("%d", &taka);
    int original_taka = taka;
    printf("%d\n", original_taka);

    for(int i = 0; i < size; i++) {
        printNote(notes[i], &taka);
    }

    return 0;
}

void printNote(int note, int *taka) {
    int res = *taka / note;
    printf("%d nota(s) de R$ %d,00\n", res, note);
    *taka = *taka % note;
}



/*
    & Alternative Solution:

#include <stdio.h>

int main() {
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int size = sizeof(notes) / sizeof(notes[0]);
    int taka;
    scanf("%d", &taka);
    printf("%d\n", taka);

    for(int i = 0; i < size; i++) {
        int result = taka / notes[i];
        printf("%d nota(s) de R$ %d,00\n", result, notes[i]);
        taka %= notes[i];
    }
    return 0;
}

*/