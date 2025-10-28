/*Write a program to print the following pattern:
1
12
123
1234
12345*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    char line[n + 1];  
    line[n] = '\0';     

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            line[j] = '1' + j;  
        }
        line[i] = '\0';      
        printf("%s\n", line);
    }

    return 0;
}
