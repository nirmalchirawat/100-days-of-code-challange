//write a program to check the number is armstrong number.
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[20];
    int i, len, sum = 0;
    printf("enter the number to check wheter the number is armstrong or not \n");
    scanf("%s", str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        int digit = str[i] -'0';
        sum += pow(digit, len);
    }
    int number = atoi(str);
    if(sum == number){
        printf("the number is armstrong");
    }
    else {
        printf("not an armstorng number");
    }
    return 0;

}