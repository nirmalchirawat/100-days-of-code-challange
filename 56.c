//Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
