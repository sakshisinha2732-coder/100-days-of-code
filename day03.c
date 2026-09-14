#include<stdio.h>
int main(){
    float celsius;
    printf("Enter temperature in celsius:");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0;

}