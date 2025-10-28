//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {

            sum += 1;
        } else {
            numerator += 2;
            denominator += 2;
            sum += (float)numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
