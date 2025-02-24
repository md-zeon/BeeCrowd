#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    int counter[26] = {0};
    int size = strlen(word);

    for(int i = 0; i < size; i++) {
        char ch = tolower(word[i]);

        if(ch >= 'a' && ch <= 'z') {
            counter[ch - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(counter[i] > 0) {
            printf("%c = %d, ", i+'a', counter[i]);
        }
    }

    printf("\n");
	
	return 0;
}
