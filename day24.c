#include<stdio.h>
int main(){
    int i, j;
    // 5 rows
    for(i = 1; i <= 5; i++){
        for(j = 1; i <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}