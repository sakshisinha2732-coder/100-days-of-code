#include <stdio.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i;

    printf("Enter the first string: ");
    scanf("%999s", s);

    printf("Enter the second string: ");
    scanf("%999s", t);

    // Count characters in the first string
    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract character counts using the second string
    for (i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check whether all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}
