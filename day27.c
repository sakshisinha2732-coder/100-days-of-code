#include<stdio.h>
int main(){
    int i, j;
    int n = 5; // max level = 5 -> 9 stars
    // upper part - increasing
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 2*i-1; j++){
            printf("*");  
        }
        printf("\n");
    }
    // lower part - decreasing
    for(i = n-1; i >= 1; i--){
        for(j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}