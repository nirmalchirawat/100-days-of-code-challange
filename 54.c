/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   **/
  #include <stdio.h>

int main() {
    int n = 5;  // Number of rows for the upper half of the diamond
    
    // Upper half of the diamond (odd number of stars increasing)
    for (int i = 1; i <= n; i++) {
        // Print spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars (odd numbers: 1, 3, 5, ...)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond (odd number of stars decreasing)
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
