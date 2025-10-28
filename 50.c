/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    **/
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of lines (n): ");
    scanf("%d", &n);

    char line[n + 1];  
    line[n] = '\0';    

    for (int i = 0; i < n; i++) {

        memset(line, ' ', i);

        memset(line + i, '*', n - i);

        printf("%s\n", line);
    }

    return 0;
}
