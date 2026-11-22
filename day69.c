#include <stdio.h>

int main() {
    int arr[100], seen[1001] = {0};
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements (0 to 1000):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }

        seen[arr[i]] = 1;
    }

    printf("No repeated element found.\n");

    return 0;
}
