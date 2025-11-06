/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>

int main() {
    // Array representing the number of stars in each group/block
    int groups[] = {1, 4, 5, 3, 1};
    int size = sizeof(groups)/sizeof(groups[0]);
    
    for (int i = 0; i < size; i++) {
        // Print the stars for the current group
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        printf("\n");  // Blank line between groups
    }

    return 0;
}
