//write aprogram to reverse a given number.
#include<stdio.h>
#include<string.h>
int main()
{
    char num[20];
    int i, length;
    printf("enter the number:");
    scanf("%s",num);
    length = strlen(num);
    printf("reversed number is:");
    for(int i=length-1; i>=0; i--)
    {
        printf("%c",num[i]);
    }
}
