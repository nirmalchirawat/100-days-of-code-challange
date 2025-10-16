//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int a;
    printf("enter the value: ");
    scanf("%d", &a);
   if (a>0){
       printf("the value is positive");
   }
   else if (a<0){
       printf("the number is neagtive");
   }
   else if(a==0){
       printf("the number is zero");
   }
    return 0;
}
