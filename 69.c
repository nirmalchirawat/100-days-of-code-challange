//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    
    // Read the number of elements
    scanf("%d", &n);
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = INT_MIN;
    int secondMax = INT_MIN;
    
    // Find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    
    if (secondMax == INT_MIN) {
        printf("No second largest element\n");
    } else {
        printf("%d\n", secondMax);
    }
    
    return 0;
}

