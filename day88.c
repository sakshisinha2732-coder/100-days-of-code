#include <stdio.h>

enum Days
{
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY",
        "WEDNESDAY", "THURSDAY",
        "FRIDAY", "SATURDAY"
    };

    int i;

    printf("Enum Names and Values:\n\n");

    for (i = 0; i < 7; i++)
    {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
