//Write a program to print the product of even numbers from 1 to n
#include<stdio.h>
int main()
{
    int n, sum, even;
    int i;
    sum = 0;
    even = 2;
    printf("sum of the first n even numbers: ");
    scanf("%d", &n);
    for(i=1;i<=n; i++) {
        sum += even;
        even += 2;
    }
    printf("the sum of n even number is %d", sum);
    return 0;
}
