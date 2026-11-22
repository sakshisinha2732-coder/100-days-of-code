#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0, length = 0;
    int maxLength = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        } else {
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }
            length = 0;
            start = i + 1;
        }
    }

    // Check the last word
    if (length > maxLength) {
        maxLength = length;
        maxStart = start;
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength of longest word: %d\n", maxLength);

    return 0;
}
