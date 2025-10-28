//Write a program to check if a number is a strong number.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    char str[20];
    int sum = 0;

    printf("Enter a number: ");
    scanf("%s", str);  

    int num = atoi(str);   

    for (int i = 0; str[i] != '\0'; i++) {
        int digit = str[i] - '0';
        sum += factorial(digit);
    }

    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}
