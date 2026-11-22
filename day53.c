#include <stdio.h>

int main() {
    int arr[100], n, i;
    int totalSum = 0, leftSum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        totalSum -= arr[i];

        if (leftSum == totalSum) {
            printf("Pivot index: %d\n", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("Pivot index: -1\n");

    return 0;
}
