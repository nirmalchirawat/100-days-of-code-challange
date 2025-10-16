//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main(){
    int month;
    printf("enter the numer of the month: ");
    scanf("%d", &month);
     switch(month) {
        case 1:
            printf("january - 31days \n");
            break;
        case 2:
            printf("february - 28days or 29days \n");
            break;
        case 3:
            printf("march - 31days\n");
            break;
        case 4:
            printf("april - 31days\n");
            break;
        case 5:
            printf("may - 30days\n");
            break;
        case 6:
            printf("june - 31days\n");
            break;
        case 7:
            printf("july - 30days\n");
            break;
        case 8:
            printf("augest - 31days\n");
        case 9:
            printf("september - 30days\n");
        case 10:
            printf("october - 31days");
        case 11:
            printf("november - 30days\n");
        case 12:
            printf("december - 31days\n");
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }
    return 0;
}
