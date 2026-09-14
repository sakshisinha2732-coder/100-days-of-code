#include<stdio.h>
int main(){
    int i, j;
    int n = 4; // 4 = max stars 7, if you need 5 levels change to 5
    // upper triangle
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 2*i-1; j++){
            printf("*");
        } 
        printf("\n");
    }
    // lower triangle
    for(i = n-1; i >= 1; i--){
        for(j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
