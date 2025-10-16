//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float r, circumference, area;
    printf("enter the radius of circle: \n");
    scanf("%f", &r);
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    printf("the area of the circle is: %f \n", area);
    printf("the circumference of circle is %f \n", circumference);
    return 0;
}
