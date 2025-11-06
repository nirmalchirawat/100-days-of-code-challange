//Find the sum of array elements.
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    // Print the sum of elements
    printf("%d\n", sum);

    return 0;
}
