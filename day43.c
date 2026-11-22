#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    str[length] = '\0';

    printf("Reversed string: %s\n", str);

    return 0;
}
