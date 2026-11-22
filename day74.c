#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destName[100];
    int ch;

    // Get filenames from the user
    printf("Enter source filename: ");
    scanf("%99s", sourceName);

    printf("Enter destination filename: ");
    scanf("%99s", destName);

    // Open source file in read mode
    source = fopen(sourceName, "r");

    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destName, "w");

    if (destination == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF) {
            printf("Error writing to destination file.\n");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully!\n");

    return 0;
}
