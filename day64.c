#include <stdio.h>

int main() {
    char s[1000];
    int i, j, length = 0, maxLength = 0;
    int seen[256];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Find string length without counting newline
    while (s[length] != '\0' && s[length] != '\n') {
        length++;
    }

    for (i = 0; i < length; i++) {
        for (j = 0; j < 256; j++) {
            seen[j] = 0;
        }

        for (j = i; j < length; j++) {
            unsigned char ch = (unsigned char)s[j];

            if (seen[ch] == 1) {
                break;
            }

            seen[ch] = 1;

            if (j - i + 1 > maxLength) {
                maxLength = j - i + 1;
            }
        }
    }

    printf("Length of longest substring: %d\n", maxLength);

    return 0;
}
