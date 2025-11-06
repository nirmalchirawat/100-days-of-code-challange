//Check if a matrix is symmetric.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    bool isSymmetric = true;

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        // If matrix is not square, it cannot be symmetric
        printf("False\n");
        return 0;
    }

    int matrix[rows][cols];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry: matrix[i][j] should be equal to matrix[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
