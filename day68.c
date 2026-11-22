#include <stdio.h>

int main() {
    int arr[100], n, i;
    int expectedSum, actualSum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    // Sum of integers from 0 to n
    expectedSum = n * (n + 1) / 2;

    printf("Missing number: %d\n", expectedSum - actualSum);

    return 0;
}
