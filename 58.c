//Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print max and min values
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
