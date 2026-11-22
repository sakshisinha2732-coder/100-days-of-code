#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- MENU ---\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case ADD:
            printf("Addition = %d", a + b);
            break;

        case SUBTRACT:
            printf("Subtraction = %d", a - b);
            break;

        case MULTIPLY:
            printf("Multiplication = %d", a * b);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
