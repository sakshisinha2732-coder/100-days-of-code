#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i, prefix = 1, suffix = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate products of elements to the left
    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Multiply by products of elements to the right
    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("Product array: ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
