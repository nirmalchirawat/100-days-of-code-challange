/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int late_days;
    int fine=0;
    printf("enter the days you are late : ");
    scanf("%d", &late_days);
    if(late_days<=0){
        printf("no fine. you returned book on time");
    }
    else if (late_days<=5){
        fine = 2*late_days;
        printf("fine to be pay : %d ₹", fine);
    }
    else if (late_days<=10){
        fine = 5*2+(late_days - 5)*4;
        printf("fine to be pay : %d ₹", fine);
    }
    else if (late_days<=30){
        fine = 5*2+5*4+(late_days-10)*6;
        printf("fine to be pay : %d ₹", fine);
    }
    else{
        printf("memebership cancelled..!");
    }
    return 0;
}
