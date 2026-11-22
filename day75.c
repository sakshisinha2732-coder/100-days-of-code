#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    // Get the filename
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Open the file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Clear the newline left by scanf
    getchar();

    // Get the new line of text
    printf("Enter the text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Error reading input.\n");
        fclose(fp);
        return 1;
    }

    // Append the text to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
