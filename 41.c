//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <string.h>

int main() {
    char str[20], temp;
    printf("Enter a number: ");
    scanf("%s", str); 

    int len = strlen(str);

    if (len > 1) {
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("Number after swapping first and last digit: %s\n", str);

    return 0;
}
