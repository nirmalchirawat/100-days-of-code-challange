//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    char str1[20], str2[20];
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%s", str1); 
    printf("Enter second number: ");
    scanf("%s", str2); 

    num1 = atoi(str1); 
    num2 = atoi(str2);

    result = gcd(num1, num2); 

    printf("The HCF (GCD) of %d and %d is %d\n", num1, num2, result);
    return 0;
}
