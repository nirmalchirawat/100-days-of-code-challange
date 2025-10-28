/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of lines (n): ");
    scanf("%d", &n);

    char line[n + 1];  
    line[n] = '\0';    

    for (int i = 1; i <= n; i++) {

        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }

        int start = n - i + 1;  

        for (int j = 0; j < i; j++) {
            line[j] = '0' + start + j;
        }
        line[i] = '\0';  

        printf("%s\n", line);
    }

    return 0;
}
