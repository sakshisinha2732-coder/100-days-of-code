#include <stdio.h>

enum Numbers
{
    ONE = 10,
    TWO = 20,
    THREE = 30,
    FOUR = 40,
    FIVE = 50
};

int main()
{
    printf("Enum Integer Values:\n");

    printf("ONE = %d\n", ONE);
    printf("TWO = %d\n", TWO);
    printf("THREE = %d\n", THREE);
    printf("FOUR = %d\n", FOUR);
    printf("FIVE = %d\n", FIVE);

    return 0;
}
