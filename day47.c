#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, anagram = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count characters in the first string
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Subtract characters in the second string
    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // Check whether the strings are anagrams
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
