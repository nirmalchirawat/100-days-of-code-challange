//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
   int a, b, c, greatest;
   printf("enter the three numbers: \n");
   scanf("%d %d %d", &a, &b, &c);
   if(a>=b && a>=c){
       greatest = a;
   }
   else if(b>=a && b>=c){
       greatest = b;
   }
   else {
       greatest = c;
   }
   printf("thee gratest no is %d ", greatest);
    return 0;
}
