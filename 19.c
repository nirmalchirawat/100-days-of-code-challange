//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
#include<math.h>
int main(){
    int hypotenuse, base, perpendicular;
    printf("enter the base: ");
    scanf("%d", &base);
    printf("enter the perpendicular: ");
    scanf("%d", &perpendicular);
    printf("enter the hypotenuse: ");
    scanf("%d", &hypotenuse);
    if(base==hypotenuse || hypotenuse==perpendicular){
        printf("the triangle is equilateral");
    }
    else if(hypotenuse == base || base == perpendicular || perpendicular == hypotenuse){
        printf("the triangle is isosceles");
    }
    else {
        printf("the triangle is scalene");
    }
    return 0;
}
