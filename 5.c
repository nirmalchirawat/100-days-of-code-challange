//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float c, f;
    printf("enter the values of celcius: \n");
    scanf("%f",&c);
    f = c*1.8+32;
    printf("ferenheit: %.2f",f);
    return 0;
}
