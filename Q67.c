#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[100]; // taking extra space for insertion

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1-based index): ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift elements right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
