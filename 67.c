//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, elem;

    // Read the number of elements
    scanf("%d", &n);
    int arr[n + 1];  // Extra space for the new element

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to insert and the position (0-based index)
    scanf("%d %d", &elem, &pos);

    // Check if position is valid
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 1;
    }

    // Shift elements to the right from position
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element at the given position
    arr[pos] = elem;
    n++;  // Increase size

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
