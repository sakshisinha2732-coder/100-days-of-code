#include<stdio.h>
int main(){
    int i, j;
    // 5 rows
    for(i = 1; i <= 5; i++){
        // 5 stars in each row
        for(j = 1; j <= 5; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}