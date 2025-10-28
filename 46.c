/*Write a program to print the following pattern:
*****
*****
*****
*****
*****/
#include <stdio.h>
#include <string.h>

int main() {
    char row[6];          
    memset(row, '*', 5);  
    row[5] = '\0';        

    for (int i = 0; i < 5; i++) {
        printf("%s\n", row);
    }

    return 0;
}
