//Write a program to find the product of odd digits of a number.
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int product = 1, foundOdd = 0;

    printf("Enter a number: ");
    scanf("%s", str);  

    for (int i = 0; str[i] != '\0'; i++) {
        int digit = str[i] - '0';
        if (digit % 2 != 0) {         
            product *= digit;
            foundOdd = 1;
        }
    }

    if (foundOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
