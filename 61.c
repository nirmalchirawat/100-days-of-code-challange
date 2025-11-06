//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, key, index = -1;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search
    scanf("%d", &key);

    // Linear search for the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    // Print the index or -1 if not found
    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
