//write a program to check if a number is prime.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    char str[20];
    printf("Enter a number: ");
    scanf("%s", str);

    // Convert string to integer using atoi
    int num = atoi(str);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
