
#include <stdio.h>

int main() {
    int arr[100], n, x;
    int i, ceilIndex = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find the first element greater than or equal to x
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Ceil index: %d\n", ceilIndex);

    return 0;
}
