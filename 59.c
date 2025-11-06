//Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Print the counts of even and odd numbers
    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
