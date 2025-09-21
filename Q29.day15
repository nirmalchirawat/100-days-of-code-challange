//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // To store factorial value

    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;  // Multiply factorial by each number from 1 to n
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
