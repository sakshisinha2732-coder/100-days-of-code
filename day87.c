#include <stdio.h>

enum Role
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum Role role;

    int choice;

    printf("--- USER ROLES ---\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have normal access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.");
            break;

        default:
            printf("Invalid Role!");
    }

    return 0;
}
