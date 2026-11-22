#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    if (first == -1) {
        printf("First occurrence index: -1\n");
        printf("Last occurrence index: -1\n");
    } else {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index: %d\n", last);
        printf("First occurrence value: %d\n", nums[first]);
        printf("Last occurrence value: %d\n", nums[last]);
    }

    return 0;
}
