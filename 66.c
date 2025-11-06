//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, key;

    // Read the number of elements in the sorted array
    scanf("%d", &n);
    int arr[n + 1];  // Extra space for the new element

    // Read the sorted array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to insert
    scanf("%d", &key);

    int i;
    // Find the position to insert the key
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];  // Shift elements to the right
    }

    // Insert the element at the found position
    arr[i + 1] = key;
    n++;  // Increment the size of the array

    // Print the updated sorted array
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
