#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, start = 0, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    // Remove the newline character
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("Name with initials: ");

    for (i = 0; i < len; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            start = i;

            // Check whether this is the last word
            int j = i;
            while (j < len && name[j] != ' ') {
                j++;
            }

            if (j == len) {
                printf("%s", name + start);
            } else {
                printf("%c. ", toupper((unsigned char)name[start]));
            }
        }
    }

    printf("\n");

    return 0;
}
