//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read the input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator or newline
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    // Print the count of characters
    printf("%d\n", count);

    return 0;
}
