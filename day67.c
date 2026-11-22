#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    printf("Enter the elements of the first sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    printf("Enter the elements of the second sorted array:\n");
    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements from the first array
    while (i < m) {
        merged[k++] = a[i++];
    }

    // Copy remaining elements from the second array
    while (j < n) {
        merged[k++] = b[j++];
    }

    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}
