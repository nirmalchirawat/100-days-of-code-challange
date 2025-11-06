//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;  // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}
