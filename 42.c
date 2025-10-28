//Write a program to check if a number is a perfect number.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[20];
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%s", str);        
    num = atoi(str);         

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
