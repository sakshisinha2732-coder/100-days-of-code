#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open the existing file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open info.txt\n");
        return 1;
    }

    printf("Contents of the file:\n");

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
