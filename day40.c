#include <stdio.h>

int main() {
    int a[10][10], m, n, i, j, d;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for (d = 0; d < m + n - 1; d++) {
        for (i = 0; i < m; i++) {
            j = d - i;

            if (j >= 0 && j < n) {
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\n");
    return 0;
}
