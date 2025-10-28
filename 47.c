/*Write a program to print the following pattern:
*
**
***
*****/
#include <stdio.h>
#include <string.h>

int main() {
    char line[6];               
    memset(line, '*', 5);       
    line[5] = '\0';             

    for (int i = 1; i <= 5; i++) {
        line[i] = '*';          
        line[i+1] = '\0';       
        printf("%s\n", line);
    }

    return 0;
}
