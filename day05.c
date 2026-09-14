#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI, A;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;
    A = P * pow((1 + R / 100), T);
    CI = A - P;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f", CI);

    return 0;
}