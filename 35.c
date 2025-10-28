//write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    printf("Factors of %d are: ", num);
    
    // Loop to check and print factors
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}