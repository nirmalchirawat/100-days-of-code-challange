//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    // Read the input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    // Print vowels and consonants count
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
