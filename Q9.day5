//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include <math.h>
int main()
{
    double p, r, t, s, c, n;
    printf("enetr the amonut in ruppes: ");
    scanf("%lf", &p);
    printf("enter the rate of intrest in percent per annum: ");
    scanf("%lf", &r);
    printf("eneter the time in years: ");
    scanf("%lf", &t);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%lf", &n);
    //formula of simple compound intrest
    s = (p*r*t)/100;
    printf("the simple intrest is: %lf \n", s);
    //formula for compound intrest
    c = p*pow(1+(r/(n*100)), n*t);
    c = c-p;
    printf("the compound intrest is: %.2lf", c);
    return 0;
}
