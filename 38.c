//Write a program to find the sum of digits of a number.
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int sum = 0;

    printf("Enter a number: ");
    scanf("%s", str);  

    for (int i = 0; str[i] != '\0'; i++) {
        sum += (str[i] - '0');  
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
