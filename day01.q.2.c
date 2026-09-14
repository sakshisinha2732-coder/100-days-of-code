#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    printf("Quotient = %d\n", a / b);
    return 0;
}