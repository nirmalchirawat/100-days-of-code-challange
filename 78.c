//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Read the size of the square matrix (number of rows = number of columns)
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Print the sum of the main diagonal
    printf("%d\n", sum);

    return 0;
}
