//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    float cost_price, selling_price;
    printf("enetr the cost price : ");
    scanf("%f", &cost_price);
    printf("enter the selling price : ");
    scanf("%f", &selling_price);
    if(selling_price>cost_price){
        float profit, profit_percentage;
        profit = selling_price-cost_price;
        profit_percentage = (profit/cost_price)*100;
        printf("profit is %f percent", profit_percentage);
    }
    else if (selling_price<cost_price){
        float loss, loss_percentage;
        loss = cost_price-selling_price;
        loss_percentage = (loss/cost_price)*100;
        printf("loss is %f percent", loss_percentage);
    }
    else{
        printf("no profit and no loss");
    }
    return 0;
}
