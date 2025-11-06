//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    bool distinct = true;

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        // Diagonal elements exist only for square matrix
        printf("False\n");
        return 0;
    }

    int matrix[rows][cols];
    int diag[rows];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements into diag array
    for (int i = 0; i < rows; i++) {
        diag[i] = matrix[i][i];
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diag[i] == diag[j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
