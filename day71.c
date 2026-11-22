#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open the file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get user input
    printf("Enter your name: ");
    scanf(" %99[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to the file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("Data saved successfully to info.txt!\n");

    return 0;
}
