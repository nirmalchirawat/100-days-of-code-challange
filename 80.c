//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Read dimensions of first matrix
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];

    // Read dimensions of second matrix
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    // Read first matrix elements
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Read second matrix elements
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    int result[r1][c2];

    // Initialize result matrix elements to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
