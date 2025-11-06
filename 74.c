//Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int transposed[cols][rows];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
