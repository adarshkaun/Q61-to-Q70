#include <stdio.h>

int main() {
    int n, element, pos = 0;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[100];  // extra space for insertion

    printf("Enter elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find the correct position
    while (pos < n && arr[pos] < element) {
        pos++;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;

    // Print final array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
