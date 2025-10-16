//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the two values:\n");
    scanf("%d %d", &a, &b);
    printf("before swapping : a=%d  b=%d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swaping : a=%d b=%d",a ,b);
    return 0;
}
