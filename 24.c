/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include<stdio.h>
#include<math.h>
int main()
{
    int units;
    int bill=0;
    printf("enter the units : ");
    scanf("%d", &units);
    if(units<=0){
        printf("no bill.");
    }
    else if (units<=100){
        bill = 5*units;
        printf("bill is to be pay : %d ₹", bill);
    }
    else if (units<=200){
        bill = 100*5+(units - 100)*7;
        printf("bill is to be pay : %d ₹", bill);
    }
    else if (units<=300){
        bill = 100*5+100*7+(units-200)*10;
        printf("bill is to be pay : %d ₹", bill);
    }
    else {
    bill = 100*5 + 100*7 + 100*10 + (units - 300)*12;
    printf("bill is to be pay : %d ₹ ",bill);
    }
    return 0;
}
