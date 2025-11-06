//Delete an element from an array.
#include <stdio.h>

int main() {
    int n, elem;
    
    // Read the number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the element to delete
    scanf("%d", &elem);
    
    int pos = -1;
    // Find the position of the first occurrence of elem
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem) {
            pos = i;
            break;
        }
    }
    
    // If element is not found
    if (pos == -1) {
        printf("Element not found\n");
        return 0;
    }
    
    // Shift elements to the left to delete the element
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--;  // Decrease the size of the array
    
    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
