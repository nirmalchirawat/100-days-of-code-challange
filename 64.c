//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    char num[100];
    int count[10] = {0};

    // Read the integer as a string for easy digit extraction
    scanf("%s", num);

    // Count occurrences of each digit
    for (int i = 0; num[i] != '\0'; i++) {
        count[num[i] - '0']++;
    }

    // Find the digit with the maximum count
    int maxCount = count[0];
    int digit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }

    // Print the digit that occurs most frequently
    printf("%d\n", digit);

    return 0;
}
