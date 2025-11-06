//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print diagonal traversal
    for (int d = 0; d < rows + cols - 1; d++) {
        int start_row = d < cols ? 0 : d - cols + 1;
        int start_col = d < cols ? d : cols - 1;

        while (start_row < rows && start_col >= 0) {
            printf("%d ", matrix[start_row][start_col]);
            start_row++;
            start_col--;
        }
    }
    printf("\n");

    return 0;
}
