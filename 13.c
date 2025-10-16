//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
{
        printf("%d it is the leap year", year); 
    }
    else{
        printf("%d it is not the leap year", year);
    }
    return 0;
}
