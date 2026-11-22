#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, len = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Calculate string length without strlen()
    while (str[len] != '\0') {
        len++;
    }

    // Print all substrings
    printf("All substrings are:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
