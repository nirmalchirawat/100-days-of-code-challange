//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];

    // Read sorted array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the key to search
    scanf("%d", &key);

    int low = 0, high = n - 1;
    int mid, index = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
