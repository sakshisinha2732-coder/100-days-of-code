#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int found;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");

    for (i = 0; i < n; i++) {
        found = 0;

        // Search from the nearest left element
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("-1");
        }

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
