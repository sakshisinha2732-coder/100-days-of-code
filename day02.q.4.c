#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius:");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius;
    float circumference = 2 * pi * radius;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}