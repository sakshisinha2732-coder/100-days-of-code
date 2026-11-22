#include <stdio.h>

int main() {
    int day, month, year;

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month < 1 || month > 12 ||
        day < 1 || day > 31 || year < 1) {
        printf("Invalid date format.\n");
        return 0;
    }

    printf("Formatted date: %02d-%s-%04d\n",
           day, months[month - 1], year);

    return 0;
}
