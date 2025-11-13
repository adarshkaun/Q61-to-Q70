#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        // Update largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        // Update second largest
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element (all elements may be same).\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
